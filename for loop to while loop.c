#include <stdio.h>

int main(void){
    int i,j; //宣告變數i j
    i=1; //給i值:1 從第i行開始
    while (i<=10){ //回圈 當i<=10不成立停止 (組共幾行)
        printf("(第%2d行): ",i); //印出第幾行
        j=1; //給j值:1 (因外圈whilen所以須在內圈重新指定值)
        while (j<=10){ //回圈 當j<10不成立停止 (印出幾的*符號)
            if (j<=i){
                /*  如果j<=i印出*符號
                    印出一個*後進行下一個回圈
                    第五行:
                    i j
                    5 1 *       j<i
                    5 2 **      j<i
                    5 3 ***     j<i
                    5 4 ****    j<i
                    5 5 *****   j=i */
                printf("*");
            }
            j++;//j值+i
        }    
        printf("\n");
        i++; //i值+1 
    }
    printf("-------------我是分隔線-------------\n");
    i = 1;//另一個三角形重置行數為1開始
    do {
        printf("(第%2d行): ", i);
        j=10; //倒著印要預設10個星星 因為有10行
        do {
            if (j>=i){
                /*  如果j>=i印出*符號
                    印出一個*後進行下一個回圈
                    第五行:
                    i j
                    5 5 *****   j=i
                    5 4 ****    j>i
                    5 3 ***     j>i
                    5 2 **      j>i
                    5 1 *       j>i */
                printf("*");
            }
            j--;//j值-1 (越印越少用--不是++)
        } while (j>0);//when not j>0 stop loop
        printf("\n");
        i++;
    } while (i<=10);
    return 0;
}