#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printChessBoard(char *);
int judge(char *);
void printChessBoard(char *c){
   int i;
   printf("當前ChessBoard\n\n");
   for (i = 1; i < 10; i++){
      if (c[i - 1] == '\0'){
         printf("| (%d) |", i);
      } else {
         printf("|  %c  |", c[i - 1]);
      }
      if (i % 3 == 0){
         printf("\n-----------------------\n");
      }
   }
}

int judge(char *c){
   printf("%c_%c_%c_%c_%c_%c_%c_%c_%c", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9]);
   if (c[0]==c[1]==c[2]){
      if (c[0] != '\0'){
         printf("enter1\n");
         return 1;
      }
   } else if (c[3]==c[4]==c[5]){
      if (c[3] != '\0'){
         printf("enter2\n");
         return 1;
      }
   } else if (c[6]==c[7]==c[8]){
      if (c[6] != '\0'){
         printf("enter3\n");
         return 1;
      }
   } else if (c[0]==c[2]==c[4]){
      if (c[0] != '\0'){
         printf("enter4\n");
         return 1;
      }
   } else if (c[1]==c[3]==c[5]){
      if (c[1] != '\0'){
         printf("enter5\n");
         return 1;
      }
   } else if (c[2]==c[5]==c[9]){
      if (c[2] != '\0'){
         printf("enter6\n");
         return 1;
      }
   } else if (c[0]==c[4]==c[8]){
      if (c[0] != '\0'){
         printf("enter7\n");
         return 1;
      }
   } else if (c[2]==c[4]==c[6]){
      if (c[2] != '\0'){
         printf("enter8\n");
         return 1;
      }
   } else {
      return 0;
   }
}
int main(){
   char c[9], sign[2] = {'X', 'O'};
   int cache, i, player;
   for (i = 0; i < 9; i++)
      c[i] = '\0';
   printChessBoard(c);
   for (i = 0; i < 9; i++){
      player = i % 2 + 1;
      printf("第%d個玩家輸入：", player);
      scanf("%d", &cache);
      if (c[cache-1] == '\0'){
         c[cache - 1] = sign[i % 2];
         printChessBoard(c);
         if (judge(c) == 1){
            printf("Winner is %d",player);
         }
      } else {
         printf("Error: 位置%d已有人輸入.\n",cache);
         i--;
      }
   }
   return 0;
}
