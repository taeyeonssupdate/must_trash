/* prog12_2, 拷貝檔案內容到其它的檔案 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fptr1, *fptr2; /* 宣告指向檔案的指標fpt1與fpt2 */
    char str[100];

    /*
    把此程式點c檔放在一個資料夾裡面 然後右鍵複製路徑 把下面的(路徑)換上去 看到 \ 都換成 \\
    在資料夾立面新增文字檔 welcome.txt output.txt
    welcome.txt 裡裡面亂打內容 (盡量不要中文) output.txt 空白就好
    執行 output.txt裡面有welcome就成功了
    截圖請記得刪掉這個註解
    */

    fptr1 = fopen("(路徑)\\welcome.txt", "r"); /* 開啟可讀取的檔案 */
    fptr2 = fopen("(路徑)\\output.txt", "w");  /* 開啟可寫入的檔案 */

    if ((fptr1 != NULL) && (fptr2 != NULL)) /* 如果開檔成功 */
    {
        while (fgets(str, 100, fptr1) != NULL) /* 判斷是否到達檔尾 */
            fputs(str, fptr2);                  /* 將字元ch寫到fptr2所指向的檔案 */
        fclose(fptr1);                         /* 關閉fptr1所指向的檔案 */
        fclose(fptr2);                         /* 關閉fptr2所指向的檔案 */
        printf("檔案拷貝完成!!\n");
    }
    else
        printf("檔案開啟失敗!!\n");

    system("pause");
    return 0;
}
