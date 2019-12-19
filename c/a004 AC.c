#include <stdio.h>

int main(){
    int Y;
    while (scanf("%d",&Y)!= EOF){
        if ((Y%4 == 0 && Y%100 != 0) || Y%400 == 0){
            printf("閏年\n");
        } else {
            printf("平年\n");
        }
    }
    return 0;
}
