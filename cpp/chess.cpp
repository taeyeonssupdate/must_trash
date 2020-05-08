#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ChessBoard(char *);
int judge(char *);
void ChessBoard(char *c){
   int i;
   printf("當前ChessBoard\n");
   for (i = 1; i < 10; i++){
      if (c[i - 1] == '\0'){
         printf("| (%d) |", i);
      } else {
         printf("|  %c  |", c[i - 1]);
      }
      if (i % 3 == 0){
         printf("\n-----------------------\n\n");
      }
   }
}

int judge(char *c){
   if (c[0]==c[1] && c[1]==c[2]){
      if (&c[0] != '\0'){
         return 1;
      } else {
         return 0;
      }
   } else if (c[3]==c[4] && c[4]==c[5]){
      if (c[3] != '\0'){
         return 1;
      } else {
         return 0;
      }
   } else if (c[6]==c[7] && c[7]==c[8]){
      if (c[6] != '\0'){
         return 1;
      } else {
         return 0;
      }
   } else if (c[0]==c[3] && c[3]==c[6]){
      if (c[0] != '\0'){
         return 1;
      } else {
         return 0;
      }
   } else if (c[1]==c[4] && c[4]==c[7]){
      if (c[1] != '\0'){
         return 1;
      } else {
         return 0;
      }
   } else if (c[2]==c[5] && c[5]==c[8]){
      if (c[2] != '\0'){
         return 1;
      } else {
         return 0;
      }
   } else if (c[0]==c[4] && c[4]==c[8]){
      if (c[0] != '\0'){
         return 1;
      } else {
         return 0;
      }
   } else if (c[2]==c[4] && c[4]==c[6]){
      if (c[2] != '\0'){
         return 1;
      } else {
         return 0;
      }
   }
}

int main(){
   char c[9], sign[2] = {'X', 'O'};
   int cache, i, player;
   for (i = 0; i < 9; i++)
      c[i] = '\0';
   ChessBoard(c);
   for (i = 0; i < 9; i++){
      player = i % 2 + 1;
      printf("第%d個玩家輸入：", player);
      scanf("%d", &cache);
      if (c[cache-1] == '\0'){
         c[cache - 1] = sign[i % 2];
         ChessBoard(c);
         if (judge(c)){
            printf("玩家%d(%c)贏得比賽！\n",player,c[i-1]);
            return 0;
         }
      } else {
         printf("Error: 位置%d已有人輸入.\n",cache);
         i--;
      }
   }
   return 0;
}
