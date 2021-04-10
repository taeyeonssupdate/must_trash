/* prog11_7, 結構陣列的使用 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
struct data
{
    char name[10];
    int math;
};

struct data best(struct data student[]);
void failed(struct data student[]);
double average(struct data student[]);
void sort(struct data student[]);

int main(void)
{
    int i;
    struct data student[MAX] = {
        {"郭哲安", 80},
        {"古宗弘", 40},
        {"羅延恩", 10},
        {"張耀宗", 70},
        {"是我啦", 100}};
    struct data h;
    h = best(student);
    printf("成績最高分:  ");
    printf("%s   ", h.name);
    printf("%d\n", h.math);
    printf("\n成績不及格:\n");
    failed(student);
    printf("\n平均成績: ");
    printf("%.2f\n", average(student));
    printf("\n成績排序:\n");
    sort(student);

    // system("pause");
    return 0;
}

struct data best(struct data student[MAX])
{
    struct data high;
    high = student[0];
    int i, tmp = 0, idx = 0;
    for (i = 1; i < MAX; i++)
        if (student[i].math > high.math)
        {
            strcpy(high.name, student[i].name);
            high.math = student[i].math;
        }
    return (high);
}

void failed(struct data student[MAX])
{
    int i;
    for (i = 0; i < MAX; i++)
        if (student[i].math < 60)
        {
            printf("%-10s", student[i].name);
            printf("%d\n", student[i].math);
        }
}

double average(struct data student[MAX])
{
    int i;
    double sum = 0.0;
    for (i = 0; i < MAX; i++)
        sum += student[i].math;
    return (sum / MAX);
}

void sort(struct data student[MAX])
{
    int i, j, temp_math;
    char temp_name[10];
    int flag = 0;
    for (i = 1; (i < MAX) && (!flag); i++)
    {
        flag = 1;
        for (j = 0; j < (MAX - i); j++)
            if (student[j].math < student[j + 1].math)
            {
                strcpy(temp_name, student[j].name);
                strcpy(student[j].name, student[j + 1].name);
                strcpy(student[j + 1].name, temp_name);
                temp_math = student[j].math;
                student[j].math = student[j + 1].math;
                student[j + 1].math = temp_math;
                flag = 0;
            }
    }
    for (i = 0; i < MAX; i++)
    {
        printf("%-10s", student[i].name);
        printf("%d\n", student[i].math);
    }
}