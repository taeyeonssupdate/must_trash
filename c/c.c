#include <stdio.h>
#include <string.h>
#define MAX 2

struct student{
    char n[20];
    int g;
};

int main(){
    struct student arr_student[MAX];
    int i;

    for (i = 0; i < MAX; i++){
        printf("Please input student name\n");
        scanf("%s", arr_student[i].n);
        printf("Please input student grade\n");
        scanf("%d", &arr_student[i].g);
    }
    for (i = 0; i < MAX; i++){
        printf("%s %d\n",arr_student[i].n,arr_student[i].g);
        printf("%s %d\n",(arr_student+i)->n,(arr_student+i)->g);
    }
    system("pause");
    return 0;
}