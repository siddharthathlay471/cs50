// Target form or fall back to container elements
const form = document.querySelector("#student-search");
const input = form ? form.elements.student : document.querySelector("#studentCode");
const button = document.querySelector("#submit-button") || document.querySelector("#searchBtn") || document.querySelector("#submitBtn");
const result = document.querySelector("#result") || document.querySelector("#resultCard");

function showMessage(message, isError = false) {
  result.replaceChildren();
  result.className = isError ? "result-card error" : "result-card";
  const paragraph = document.createElement("p");
  paragraph.textContent = message;
  if (isError) paragraph.className = "error";
  result.append(paragraph);
}

function showStudent(student) {
  result.replaceChildren();
  result.className = "result-card";

  const heading = document.createElement("strong");
  heading.textContent = "Student Record";
  result.append(heading);

  const wrapper = document.createElement("div");
  wrapper.className = "table-wrapper";
  const table = document.createElement("table");
  table.className = "record-table";

  // Table headers matching your db.json
  const headers = ["Student Code", "Name", "Course", "Semester", "Email", "City"];
  const headerRow = document.createElement("tr");
  for (const label of headers) {
    const header = document.createElement("th");
    header.scope = "col";
    header.textContent = label;
    headerRow.append(header);
  }
  const tableHead = document.createElement("thead");
  tableHead.append(headerRow);

  // Table row with student data
  const row = document.createElement("tr");
  for (const value of [
    student.code,
    student.name,
    student.course,
    student.semester,
    student.email,
    student.city,
  ]) {
    const cell = document.createElement("td");
    cell.textContent = value !== undefined && value !== null ? value : "Not provided";
    row.append(cell);
  }
  const tableBody = document.createElement("tbody");
  tableBody.append(row);

  table.append(tableHead, tableBody);
  wrapper.append(table);
  result.append(wrapper);
}

async function handleSearch(event) {
  if (event) event.preventDefault();

  const searchTerm = input.value.trim().toUpperCase();
  if (!searchTerm) {
    showMessage("Enter a student ID to search.", true);
    input.focus();
    return;
  }

  if (window.location.protocol === "file:") {
    showMessage("Start the server with `node server.js`, then open http://localhost:3000 to search.", true);
    return;
  }

  if (button) button.disabled = true;
  showMessage("Searching...");

  try {
    // Matches your server.js API: /api/student?code=STU101
    const response = await fetch(`/api/student?code=${encodeURIComponent(searchTerm)}`);
    let data;
    try {
      data = await response.json();
    } catch {
      showMessage("The server returned an invalid response. Make sure you opened http://localhost:3000.", true);
      return;
    }

    // Handles your server response: { found: false, message: "NOT Found" }
    if (!response.ok || !data.found) {
      showMessage(data.message || data.error || "Student not found.", true);
      return;
    }

    const studentRecord = data.data;
    if (!studentRecord || !studentRecord.code) {
      showMessage("No student record was returned.", true);
      return;
    }

    showStudent(studentRecord);
  } catch (error) {
    console.error("Student lookup request failed:", error);
    showMessage("Could not reach the student server. Start it with `node server.js`, then open http://localhost:3000.", true);
  } finally {
    if (button) button.disabled = false;
  }
}

// Support both form submission and direct button/Enter triggers
if (form) {
  form.addEventListener("submit", handleSearch);
} else {
  if (button) button.addEventListener("click", handleSearch);
  if (input) {
    input.addEventListener("keydown", (e) => {
      if (e.key === "Enter") handleSearch(e);
    });
  }
}