#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int i, _rand, out = 0;
    char str[100];
    FILE *fptr1, *fptr2;

    /*
    把此程式點c檔放在一個資料夾裡面 然後右鍵複製路徑 把下面的(路徑)換上去 看到 \ 都換成 \\
    在資料夾立面新增文字檔 rand.txt
    執行 rand.txt裡面有剛剛的數字就成功了
    截圖請記得刪掉這個註解
    */

    fptr1 = fopen("(路徑)\\rand.txt", "w");

    if (fptr1 != NULL){
        for (i = 0; i < 10; i++){
            _rand = (rand() % 64) + 1;
            printf("%d: %d\n", i + 1, _rand);
            sprintf(str, "%d", _rand);
            fputs(str, fptr1);
            fputs("\n", fptr1);
        }
        printf("Writered to rand.txt\n"); //寫入成功提示 可以自己改
    } else { printf("Open File Fail\n"); } //開啟檔案失敗提示 可以自己改

    fclose(fptr1);

    fptr2 = fopen("(路徑)\\rand.txt", "r");

    if (fptr2 != NULL){
        i = 0;
        while (fgets(str, 100, fptr2) != NULL){
            out += atoi(str);
            i++;
        }
        printf("AVG: %d\n", out / i);
    } else { printf("Open File Fail\n"); } //開啟檔案失敗提示 可以自己改

    fclose(fptr2);

    system("pause");
    return 0;
}