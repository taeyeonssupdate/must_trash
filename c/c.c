#include <stdio.h>
#include <stdlib.h>

#define ROM 2
#define COL 3
int main(){
    /* code */
    int i,j;
    int A[ROM][COL] = {{1,2,3},{5,6,8}};
    int B[ROM][COL] = {{3,0,2},{3,5,7}};

    printf("Matrix A+B=\n");
    for(i=0;i<ROM;i++){
        for (j=0;j<COL;j++){
            printf("%3d",A[i][j]+B[i][j]);
            printf("%3d",*(*(A+i)+j))+*(*(B+i)+j);
        }
        printf("\n");
    }
    return 0;
}
