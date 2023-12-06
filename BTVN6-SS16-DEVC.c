#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    char phone[15];
    char email[50];
} Student;

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Ho va ten: ");
        scanf(" %[^\n]", students[i].name);
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        printf("So dien thoai: ");
        scanf(" %[^\n]", students[i].phone);
        printf("Email: ");
        scanf(" %[^\n]", students[i].email);
    }

    int *file = fopen("C:\\Users\\ADMIN\\Desktop\\students.txt", "w");
    if (file == NULL) {
        printf("Không the mo file\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fprintf(file, "Sinh vien %d: %s, %d tuoi, SÐT: %s, Email: %s\n", i + 1, students[i].name, students[i].age, students[i].phone, students[i].email);
    }

    fclose(file);

    return 0;
}

