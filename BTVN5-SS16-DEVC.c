#include <stdio.h>

void copyFile(char *sourceFile, char *destinationFile) {
    int *source, *destination;
    char ch;

    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Khong the mo %s\n", sourceFile);
        return;
    }

    destination = fopen(destinationFile, "a");
    if (destination == NULL) {
        fclose(source);
        printf("Khong the mo %s\n", destinationFile);
        return;
    }

    while ((ch = fgetc(source)) != EOF)
        fputc(ch, destination);

    printf("Ða sao chep noi dung tu %s sang %s\n", sourceFile, destinationFile);
      	
    fclose(source);
    fclose(destination);
}

int main() {
    char file1[] = "C:\\Users\\ADMIN\\Desktop\\bt01.txt";
    char file2[] = "C:\\Users\\ADMIN\\Desktop\\bt03.txt";
    char file3[] = "C:\\Users\\ADMIN\\Desktop\\bt5.txt";

    copyFile(file1, file3);
    copyFile(file2, file3);

    return 0;
}
