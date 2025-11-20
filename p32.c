#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    char word[100];
    int i = 0;

    fp = fopen("Demo.txt", "r");

    if (fp == NULL) {
        printf("File cannot be opened.");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            word[i] = '\0';
            for (int j = i - 1; j >= 0; j--)
                printf("%c", word[j]);
            printf("%c", ch);
            i = 0;
        } else {
            word[i++] = ch;
        }
    }

    word[i] = '\0';
    for (int j = i - 1; j >= 0; j--)
        printf("%c", word[j]);

    fclose(fp);
    return 0;
}

