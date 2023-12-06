#include <stdio.h>
int main(){
    int *file;
    char str[100];

    printf("Nhap vao mot chuoi: ");
    fwrite(str,sizeof(char),1,file);

    file = fopen("C:\\Users\\ADMIN\\Desktop\\bt01.txt", "w");
    if (file == NULL) {
        printf("Không the mo file C:\\Users\\ADMIN\\Desktop\\bt01.txt\n");
        return 1;
    }

    fprintf(file,"%s",str);
    fclose(file);

    return 0;
}
