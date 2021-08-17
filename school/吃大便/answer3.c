#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    if ((fp = fopen("/Users/taeyeon/vscode/zerojudge/school/eatshit/course.txt", "r")) == NULL)
    {
        printf("open file error!!\n");
        system("PAUSE");
        exit(0);
    }

    while ((ch = getc(fp)) != EOF)
    {
        printf("%c ", ch);
    }

    fclose(fp);
    system("PAUSE");
    return 0;
}