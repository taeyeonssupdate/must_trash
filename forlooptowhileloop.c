#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i,j,player1,player2,all_count=0,win_count=0,player1_win_count=0,player2_win_count=0;
    while (win_count == all_count){
        printf("請問你要玩幾戰？\n");
        scanf("%d",&all_count);
        printf("請問你要玩幾勝？\n");
        scanf("%d",&win_count);
        if (win_count > all_count){
            printf("Error: %d勝%d戰，你是在玩什麼XDD\n請重新輸入\n",win_count,all_count);
        }
    }
    for (i = 0; i < all_count; i++){
        printf("第%d局\n",i+1);
        player1 = 0; 
        player2 = 0;
        while ((player1 >= 0)&&(player1 <=3)){
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
    if ((player1_win_count==player2_win_count)||(player1_win_count<win_count && player2_win_count<win_count)){
        printf("平手 比數%d:%d\n",player1_win_count,player2_win_count);
    } else if (player1_win_count > player2_win_count){
        printf("玩家贏了，比數%d:%d\n",player1_win_count,player2_win_count);
    } else if (player1_win_count < player2_win_count){
        printf("電腦贏了，比數%d:%D\n",player1_win_count,player2_win_count);
    }
    //和局要繼續比要用函數比較好用=.=
    return 0;
}


