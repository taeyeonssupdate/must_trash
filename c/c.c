#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void show(int a[]), bubble(int a[]);

int main(void){
    // int data[SIZE]={26,5,81,7,63};
    int data[SIZE]={10,9,8,7,6,5,4,3,2,1};

    printf("after...\n");
    show(data);
    bubble(data);
    printf("before...\n");
    show(data);
    return 0;
}

void show(int a[]){
    int i;
    for (i=0;i<SIZE;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void bubble(int a[]){
    int i,j,temp;
    for (i=0;i<9;i++){
        for (j=9;j>0;j--){
            if (a[j]<a[j-1]){
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        show(a);
        }
    }
}