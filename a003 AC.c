#include <stdio.h>

int main(){
    int M,D;
    while (scanf("%d%d",&M,&D)!= EOF){
        if ((M*2+D)%3 == 0){
            printf("普通\n");
        }
        else if ((M*2+D)%3 == 1){
            printf("吉\n");
        }
        else if ((M*2+D)%3 == 2){
            printf("大吉\n");
        }
    }
    return 0;
}
