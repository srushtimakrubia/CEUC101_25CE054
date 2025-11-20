
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *summary;
    int size1, size2;

    printf("Enter initial summary size: ");
    scanf("%d", &size1);
    getchar();

    summary = (char *)calloc(size1, sizeof(char));

    if (summary == NULL) {
        printf("Memory allocation failed!\n");
        return 0;
    }

    printf("Enter initial article summary: ");
    fgets(summary, size1, stdin);

    printf("\nInitial Summary: %s\n", summary);

    printf("\nEnter new size for expanded summary: ");
    scanf("%d", &size2);
    getchar();

    summary = (char *)realloc(summary, size2 * sizeof(char));

    if (summary == NULL) {
        printf("Memory reallocation failed!\n");
        return 0;
    }

    printf("Enter expanded article summary: ");
    fgets(summary, size2, stdin);

    printf("\nUpdated Summary: %s\n", summary);

    free(summary);
    return 0;
}
