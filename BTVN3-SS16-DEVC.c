#include <stdio.h>

int main(){
    int *file;
    int lines;
    char content[100];

    file = fopen("C:\\Users\\ADMIN\\Desktop\\bt3.txt", "w");
    if (file == NULL){
        printf("Không the mo file\n");
        return 1;
    }

    printf("Nhap so dong: ");
    scanf("%d", &lines);

    for (int i = 0; i < lines; i++){
        printf("Nhap noi dung dong %d: ", i + 1);
        scanf(" %[^\n]", content);
        fprintf(file, "%s\n", content);
    }

    fclose(file);

    file = fopen("C:\\Users\\ADMIN\\Desktop\\bt3.txt", "r");
    if (file == NULL){
        printf("Khong the mo file\n");
        return 1;
    }

    printf("Noi dung file:\n");
    while (fgets(content, sizeof(content), file) != NULL){
        printf("%s", content);
    }

    fclose(file);

    return 0;
}
