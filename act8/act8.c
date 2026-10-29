#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insertBeginning(struct Node **head, int value) {
    struct Node *n = malloc(sizeof(struct Node));
    if (n == NULL) return;
    n->data = value;
    n->next = *head;
    *head = n;
}

void insertEnd(struct Node **head, int value) {
    struct Node *n = malloc(sizeof(struct Node));
    if (n == NULL) return;
    n->data = value;
    n->next = NULL;
    if (*head == NULL) {
        *head = n;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void display(struct Node *head) {
    if (head == NULL) {
        printf("NULL (empty list)\n");
        return;
    }
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void search(struct Node *head, int key) {
    int pos = 0;
    while (head != NULL) {
        if (head->data == key) {
            printf("Found at position %d (0-based)\n", pos);
            return;
        }
        head = head->next;
        pos++;
    }
    printf("Value not found\n");
}

void countNodes(struct Node *head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    printf("%d\n", count);
}

void deleteBeginning(struct Node **head) {
    if (*head == NULL) return;
    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

void freeAllNodes(struct Node **head) {
    struct Node *temp;
    while (*head != NULL) {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main() {
    struct Node *head = NULL;
    int choice = 0, value;

    while (choice != 7) {
        printf("\n1.Insert End 2.Insert Beg 3.Display 4.Search 5.Count 6.Delete Beg 7.Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            scanf("%d", &value);
            insertEnd(&head, value);
        } else if (choice == 2) {
            scanf("%d", &value);
            insertBeginning(&head, value);
        } else if (choice == 3) {
            display(head);
        } else if (choice == 4) {
            scanf("%d", &value);
            search(head, value);
        } else if (choice == 5) {
            countNodes(head);
        } else if (choice == 6) {
            deleteBeginning(&head);
        } else if (choice == 7) {
            freeAllNodes(&head);
        }
    }
    return 0;
}