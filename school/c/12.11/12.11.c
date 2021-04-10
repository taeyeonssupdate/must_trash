#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int i, _rand, out = 0;
    char str[100];
    FILE *fptr1, *fptr2;


    fptr1 = fopen("/Users/taeyeon/vscode/zerojudge/school/c/12.11/rand.txt", "w");

    if (fptr1 != NULL){
        for (i = 0; i < 10; i++){
            _rand = (rand() % 64) + 1;
            printf("%d: %d\n", i + 1, _rand);
            sprintf(str, "%d", _rand);
            fputs(str, fptr1);
            fputs("\n", fptr1);
        }
        printf("Writered to rand.txt\n");
    } else { printf("Open File Fail\n"); }

    fclose(fptr1);



    fptr2 = fopen("/Users/taeyeon/vscode/zerojudge/school/c/12.11/rand.txt", "r");

    if (fptr2 != NULL){
        i = 0;
        while (fgets(str, 100, fptr2) != NULL){
            out += atoi(str);
            i++;
        }
        printf("AVG: %d\n", out / i);
    } else { printf("Open File Fail\n"); }

    fclose(fptr2);

    return 0;
}