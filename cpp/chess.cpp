#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void UI(char *);
int judge(char *);

void UI(char *c){
   int i;
   printf("當前局面\n");
   for (i = 0; i < 9; i++){
      if (c[i] == '\0'){
         printf("%d   ", i+1);
      } else {
         printf("%c   ", c[i]);
      }
      if (i%3 == 2){
         printf("\n\n");
      }
   }
}

int judge(char *c){
   if (c[0]==c[1] && c[1]==c[2] && c[1] != '\0'){
      return 1;
   } else if (c[3]==c[4] && c[4]==c[5] && c[4] != '\0'){
      return 1;
   } else if (c[6]==c[7] && c[7]==c[8] && c[7] != '\0'){
      return 1;
   } else if (c[0]==c[3] && c[3]==c[6] && c[3] != '\0'){
      return 1;
   } else if (c[1]==c[4] && c[4]==c[7] && c[4] != '\0'){
      return 1;
   } else if (c[2]==c[5] && c[5]==c[8] && c[5] != '\0'){
      return 1;
   } else if (c[0]==c[4] && c[4]==c[8] && c[4] != '\0'){
      return 1;
   } else if (c[2]==c[4] && c[4]==c[6] && c[4] != '\0'){
      return 1;
   } else {
      return 0;
   }
}

int main(){
   char c[9] = {'\0','\0','\0','\0','\0','\0','\0','\0','\0'}, sign[2] = {'O', 'X'};
   int index, i=0; 
   srand(time(NULL));
   printf("電腦開始輸入0\n玩家開始輸入1:");
   scanf("%d",&i);

   if (i){
      sign[0] = 'X';
      sign[1] = 'O';
   }
   
   for (i = 0; i < 9; i++){
      printf("第%d局 ",i+1);
      if (sign[i % 2] == 'X'){
         printf("玩家輸入：");
         scanf("%d", &index);
      } else if (sign[i % 2] == 'O'){
         index = (rand() % 8) + 1;
      }
      if (c[index-1] != '\0'){
         if (sign[i%2] == 'X'){
            printf("位置%d已被下注.\n",index);
         }
         i--;
         continue;
      }
      if (sign[i%2] == 'O'){
         printf("電腦出：%d\n", index);
      }
      c[index - 1] = sign[i % 2];
      UI(c);
      if (judge(c) == 1){
         printf("%c贏得比賽！\n", sign[i % 2]);
         return 0;
      }
   }
   printf("平手！");
   return 0;
}
