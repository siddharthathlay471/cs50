#include <stdio.h>

int main() {
    FILE *fp = fopen("abc.txt", "w");
    int ch; // Changed from char to int to properly handle EOF
    
    if (fp == NULL) return 1;
    
    printf("Type text, end with #\n");
    while ((ch = getchar()) != '#') {
        if (ch == EOF) break; // Safety check for end of file
        fputc(ch, fp);
    }
    
    fclose(fp);
    return 0;
}