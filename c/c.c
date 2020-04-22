#include <stdio.h>

int main(){
    char c[5][20]={"a","b","c","d","e"};
    int a[3]={5,7,9};
    int i,sum=0;
    printf("a=%p\n",a);
    printf("&a=%p\n",&a);
    for (i=0;i<3;i++){
        printf("a[%d]=%d, *(a+%d)=%d\n",i,a,i,&a);
    }
    for (i=0;i<3;i++){
        sum+=*(a+i);
    }
    printf("sum=%d\n",sum);
    int b[3]={4,6,8};
    sum=0;
    for (i=0;i<3;i++){
        sum+=*(b+i);
    }
    printf("sum=%d\n",sum);
    for (i=0;i<5;i++){
        printf("%s",c[i]);
    }
    return 0;
}