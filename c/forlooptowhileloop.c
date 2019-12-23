#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int int_counter[7] = {0, 0, 0, 0, 0, 0, 0}; //i,p1,p2,ac=0,wc=0,p1w=0,p2w=0
    char symbol[4][10] = {"empty(0)","剪刀","石頭","布"};
    printf("==========================\n!!!猜拳遊戲開始!!!\n");
    while (int_counter[4] == 0 && int_counter[3] == 0){
        printf("請問你要玩幾戰？");
        scanf("%d",&int_counter[3]);
        fflush(stdin);
        printf("請問你要玩幾勝？");
        scanf("%d",&int_counter[4]);
        fflush(stdin);
        if (int_counter[4] > int_counter[3]){
            printf("Error: %d勝%d戰，你是在玩什麼XDD\n請重新輸入\n",int_counter[4],int_counter[3]);
        }
    }
    for (int_counter[0] = 0; int_counter[0] < int_counter[3]; int_counter[0]++){
        printf("==========================\n第%d局\n", int_counter[0] + 1);
        int_counter[1]=0;
        while (int_counter[1]<1||int_counter[1]>3){
            printf("玩家請輸入請輸入: ");
            scanf("%d", &int_counter[1]);
            fflush(stdin);
        }
        srand(time(NULL));
        int_counter[2] = rand()%3+1;
        if (int_counter[1] == int_counter[2]){
            printf("玩家，電腦都出%s，和局。\n",symbol[int_counter[1]]);
        } else if (int_counter[1] == 1 && int_counter[2] == 2){
            printf("玩家出%s，電腦出%s，電腦獲勝。\n",symbol[int_counter[1]],symbol[int_counter[2]]);
            int_counter[6]++;
        } else if (int_counter[1] == 2 && int_counter[2] == 1){
            printf("玩家出%s，電腦出%s，玩家獲勝。\n",symbol[int_counter[1]],symbol[int_counter[2]]);
            int_counter[5]++;
        } else if (int_counter[1] == 1 && int_counter[2] == 3){
            printf("玩家出%s，電腦%s，玩家獲勝。\n",symbol[int_counter[1]],symbol[int_counter[2]]);
            int_counter[5]++;
        } else if (int_counter[1] == 3 && int_counter[2] == 1){
            printf("玩家%s，電腦出%s，電腦獲勝。\n",symbol[int_counter[1]],symbol[int_counter[2]]);
            int_counter[6]++;
        } else if (int_counter[1] == 2 && int_counter[2] == 3){
            printf("玩家出%s，電腦%s，電腦獲勝。\n",symbol[int_counter[1]],symbol[int_counter[2]]);
            int_counter[6]++;
        } else if (int_counter[1] == 3 && int_counter[2] == 2){
            printf("玩家%s，電腦出%s，玩家獲勝。\n",symbol[int_counter[1]],symbol[int_counter[2]]);
            int_counter[5]++;
        }
        if (int_counter[6] == int_counter[4]){
            printf("player2 win first ");
            break;
        } else if (int_counter[5] == int_counter[4]){
            printf("player1 win first ");
            break;
        }
        printf("目前比數:%d:%d\n",int_counter[5],int_counter[6]);
        if (int_counter[5]<int_counter[4]&&int_counter[6]<int_counter[4]&&int_counter[0]==int_counter[3]-1){
            printf("和局再一局\n");
            int_counter[0]--;
        }
    }
    if ((int_counter[5]==int_counter[6])||(int_counter[5]<int_counter[4] && int_counter[6]<int_counter[4])){
        printf("平手 比數%d:%d\n==========================", int_counter[5], int_counter[6]);
    } else if (int_counter[5] > int_counter[6]){
        printf("玩家贏了，比數%d:%d\n==========================", int_counter[5], int_counter[6]);
    } else if (int_counter[5] < int_counter[6]){
        printf("電腦贏了，比數%d:%D\n==========================", int_counter[5], int_counter[6]);
    }
    return 0;
}


