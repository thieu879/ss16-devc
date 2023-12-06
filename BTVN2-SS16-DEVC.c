#include <stdio.h>

int main(){
    int *file;
    char ch;

    file = fopen("C:\\Users\\ADMIN\\Desktop\\bt01.txt", "r");
    if (file == NULL){
        printf("Khong the mo tep\n");
        return 0;
    }

    while ((ch = fgetc(file)) != EOF){
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}
