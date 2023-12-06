#include <stdio.h>

int main() {
    int *file;
    char ch;
    int lines = 0;

    file = fopen("C:\\Users\\ADMIN\\Desktop\\bt03.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 0;
    }

    while((ch = fgetc(file)) != EOF) {
        putchar(ch);
        if (ch == '\n') {
            lines++;
        }
    }

    fclose(file);

    printf("\nSo dong trong file: %d\n", lines);

    return 0;
}
