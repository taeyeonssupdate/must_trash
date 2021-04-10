#include <stdio.h>

int main(void)
{

    FILE *fptr1, *fptr2, *fptr3;
    char str[100];

    /*
    把此程式點c檔放在一個資料夾裡面 然後右鍵複製路徑 把下面的(路徑)換上去 看到 \ 都換成 \\
    在資料夾立面新增文字檔 aa.txt bb.txt cc.txt
    aa.txt bb.txt 裡裡面亂打內容 (盡量不要中文) cc.txt 空白就好
    執行 cc.txt裡面有aa跟bb就成功了
    截圖請記得刪掉這個註解
    */

    fptr1 = fopen("(路徑)\\aa.txt", "r");
    fptr2 = fopen("(路徑)\\bb.txt", "r");
    fptr3 = fopen("(路徑)\\cc.txt", "w");

    if (fptr1 != NULL && fptr2 != NULL && fptr3 != NULL)
    {
        while (fgets(str, 100, fptr1) != NULL)
        {
            fputs(str, fptr3);
        }
        fputs("\n", fptr3);
        while (fgets(str, 100, fptr2) != NULL)
        {
            fputs(str, fptr3);
        }
        printf("合併完成！");
    }
    else
    {
        printf("Open File Fail\n");
    }

    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);

    system("pause");
    return 0;
}
