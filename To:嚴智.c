#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, number; //宣告變數i j number
    printf("Please enter a number: "); //要求輸入
    scanf("%d", &number); //掃描輸入
    
    for (i = 1; i <= number; i++){ //設定i=1 迴圈i+1 當i<=number停止迴圈 >> 三角形部分總共幾行
        if (i == number){ //如果i=number代表已經進入最後一行且三小型已輸出完成
            for (i = 1; i <= number; i++){ //開始製作下方矩形 >> 相同方法for迴圈製造需要輸出的5行
                printf("%*c", number+1, '*'); //製作對齊線根據規律為number+1
                for (j = 0; j < number+number+1; j++){ //相同方法並套用公式補齊後面字元 >> 左邊number個+右邊number個加上中間4個測試出來的範圍為number+number+2
                    printf("%c", '*');
                }
                printf("\n"); //i迴圈換行
            }
        }
    }


    for (i = 1; i <= number; i++){ //設定i=1 迴圈i+1 當i<=number停止迴圈 >> 三角形部分總共幾行
        /* %*c *=i char=*這個字
            因迴圈+1
            %1c =*
            %2c = *
            %3c =  *
            %4c =   *
            %5c =    *         */
        printf("%*c", i, '*'); //製作左邊三角形對齊線
        for (j = 1; j < i; j++){ //相同方法並套用公式補齊後面字元
            printf("%c", '*');
        }
        printf("%*c", 2*(number-i)+3, ' '); //利用相同公式反過來把空格補齊 >> 可以把' '換成'd'查看中間對齊線
        printf("%*c", 2*(number-i)+2, '*'); //利用相同公式反過來製作三角形對齊線 >> 右邊三角形
        for (j = 1; j < i; j++){ //相同方法並套用公式補齊後面字元
            printf("%c", '*');
        }
        printf("\n"); //上半部三小型輸出完後換行進行下一個i迴圈
        // if (i == number){ //如果i=number代表已經進入最後一行且三小型已輸出完成
        //     for (i = 1; i <= number; i++){ //開始製作下方矩形 >> 相同方法for迴圈製造需要輸出的5行
        //         printf("%*c", number+1, '*'); //製作對齊線根據規律為number+1
        //         for (j = 0; j < number+number+1; j++){ //相同方法並套用公式補齊後面字元 >> 左邊number個+右邊number個加上中間4個測試出來的範圍為number+number+2
        //             printf("%c", '*');
        //         }
        //         printf("\n"); //i迴圈換行
        //     }
        // }
    }
    return 0;
}
