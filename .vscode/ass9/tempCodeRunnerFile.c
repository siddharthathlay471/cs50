#include <stdio.h>
int main() {
    FILE *fp = fopen("abc.txt", "w");
    char ch;
    if (fp == NULL) return 1;
    printf("Type text, end with #\n");
    while ((ch = getchar()) != '#')
        fputc(ch, fp);
    fclose(fp);
return 0;
}
