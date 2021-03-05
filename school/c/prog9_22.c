#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toUpper(char s[]);
void toLower(char s[]);
void reverse(char s[]);

int main(void){
    char str[15];

    printf("請輸入一個小寫字串\n");
    gets(str);
    toUpper(str);
    printf("轉換成大寫後的:%s\n", str);

    printf("請輸入一個大寫字串\n");
    gets(str);
    toLower(str);
    printf("轉換成小寫後的:%s\n", str);

    printf("請輸入一個要顛倒的字串\n");
    gets(str);
    reverse(str);
    puts("顛倒印出的結果為:");
    puts(str);

    return 0;
}

void toUpper(char s[]){
    int i = 0;
    while (s[i] != '\0'){
        if (s[i] >= 97 && s[i] <= 122){
            s[i] = s[i] - 32;
        }
        i++;
    }
}

void toLower(char s[]){
    int i = 0;
    while (s[i] != '\0'){
        if (s[i] >= 65 && s[i] <= 90){
            s[i] = s[i] + 32;
        }
        i++;
    }
}

void reverse(char s[]){
    char cache[15];
    int i, end, count = 0;
    while (s[count] != '\0'){
        count++;
    }
    end = count - 1;
    for (i = 0; i < count; i++){
        cache[i] = s[end];
        end--;
    }
    cache[i] = '\0';
    for (i = 0; i < count; i++){
        s[i] = cache[i];
    }
}