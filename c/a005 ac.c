# include <stdio.h>

int main(){
    int a,b,c,d;
    int i;
    for (scanf("%d",&i);i>0;i--){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if (d-c==c-b){
            printf("%d %d %d %d %d\n",a,b,c,d,d+(d-c));
        } else {
            printf("%d %d %d %d %d\n",a,b,c,d,d*(d/c));
        }
    }
    return 0;
}