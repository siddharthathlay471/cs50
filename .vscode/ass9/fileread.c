#include <stdio.h>

int main() {
    FILE *fp = fopen("abc.txt", "r");
    int ch; /* int, not char! */
    
    if (fp == NULL) return 1;
    
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
        
    fclose(fp);
    return 0;
}