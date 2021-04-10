#include <stdio.h>

int main(void)
{

    FILE *fptr1, *fptr2, *fptr3;
    char str[100];

    fptr1 = fopen("/Users/taeyeon/vscode/zerojudge/school/c/12.8/aa.txt", "r");
    fptr2 = fopen("/Users/taeyeon/vscode/zerojudge/school/c/12.8/bb.txt", "r");
    fptr3 = fopen("/Users/taeyeon/vscode/zerojudge/school/c/12.8/cc.txt", "w");

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

    return 0;
}
