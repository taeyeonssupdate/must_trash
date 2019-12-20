#include <stdio.h>
#include <string.h>
int main(){
    char array[200] = {'\0'};
    int i;
    while (scanf("%s", array) != EOF){
        for (i = 0; i < strlen(array); i++){
            array[i] -= 7;
        }
        printf("%s\n", array);
    }
    return 0;
}