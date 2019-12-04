#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i,player1,player2,player1_win_count=0,player2_win_count=0;
    printf("猜拳遊戲三戰兩勝\n");
    for (i=1;i<4;i++){
        printf("第%d局\n",i);
        player1 = 0; 
        player2 = 0;
        while (player1 > 3 || player1 < 1){
            printf("玩家請輸入請輸入: ");
            scanf("%d", &player1);
            fflush(stdin);
            break;
        }
        srand(time(NULL));
        player2 = rand()%3+1;
        if (player1 == player2){
            printf("玩家,電腦都出%d，和局。\n",player1);
        } else if (player1 == 1 && player2 == 2){
            printf("玩家出剪刀，電腦出石頭，電腦獲勝。\n");
            player2_win_count++;
        } else if (player1 == 2 && player2 == 1){
            printf("玩家出石頭，電腦出剪刀，玩家獲勝。\n");
            player1_win_count++;
        } else if (player1 == 1 && player2 == 3){
            printf("玩家出剪刀，電腦出布，玩家獲勝。\n");
            player1_win_count++;
        } else if (player1 == 3 && player2 == 1){
            printf("玩家出布，電腦出剪刀，電腦獲勝。\n");
            player2_win_count++;
        } else if (player1 == 2 && player2 == 3){
            printf("玩家出石頭，電腦出布，電腦獲勝。\n");
            player2_win_count++;
        } else if (player1 == 3 && player2 == 2){
            printf("玩家出布，電腦出石頭，玩家獲勝。\n");
            player1_win_count++;
        }
    }
    printf("%d比%d ",player1_win_count,player2_win_count);
    if (((player1_win_count==2)&&(player2_win_count<2))||((player1_win_count==3)&&(player2_win_count<3))){
        printf("玩家獲勝");
    }
    else if (((player2_win_count==2)&&(player1_win_count<2))||((player2_win_count==3)&&(player1_win_count<3))){
        printf("電腦獲勝");
    } else {
        printf("平手！！");
    }
    return 0;
}


