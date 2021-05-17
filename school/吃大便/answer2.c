#include <stdio.h>

typedef struct student
{
    char name[20];
    int ID;
    int age;
} stud;

void output(stud out);
int main(int argc, char const *argv[])
{
    stud s1;
    printf("Name: ");
    scanf("%s", &s1.name);
    printf("ID: ");
    scanf("%d", &s1.ID);
    printf("Age: ");
    scanf("%d", &s1.age);
    output(s1);
    system("pause");
    return 0;
}

void output(stud out)
{
    printf("%s\n", out.name);
    printf("%d\n", out.ID);
    printf("%d\n", out.age);
}