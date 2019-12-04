#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i,p1,p2,ac=0,wc=0,p1w=0,p2w=0;
    printf("==========================\n!!!猜拳遊戲開始!!!\n");
    while (wc == 0 && ac == 0){
        printf("請問你要玩幾戰？");
        scanf("%d",&ac);
        fflush(stdin);
        printf("請問你要玩幾勝？");
        scanf("%d",&wc);
        fflush(stdin);
        if (wc > ac){
            printf("Error: %d勝%d戰，你是在玩什麼XDD\n請重新輸入\n",wc,ac);
        }
    }
    for (i = 0; i < ac; i++){
        printf("==========================\n第%d局\n", i + 1);
        p1=0;
        while (p1<1||p1>3){
            printf("玩家請輸入請輸入: ");
            scanf("%d", &p1);
            fflush(stdin);
        }
        srand(time(NULL));
        p2 = rand()%3+1;
        if (p1 == p2){
            printf("玩家，電腦都出%d，和局。\n",p1);
        } else if (p1 == 1 && p2 == 2){
            printf("玩家出剪刀，電腦出石頭，電腦獲勝。\n");
            p2w++;
        } else if (p1 == 2 && p2 == 1){
            printf("玩家出石頭，電腦出剪刀，玩家獲勝。\n");
            p1w++;
        } else if (p1 == 1 && p2 == 3){
            printf("玩家出剪刀，電腦出布，玩家獲勝。\n");
            p1w++;
        } else if (p1 == 3 && p2 == 1){
            printf("玩家出布，電腦出剪刀，電腦獲勝。\n");
            p2w++;
        } else if (p1 == 2 && p2 == 3){
            printf("玩家出石頭，電腦出布，電腦獲勝。\n");
            p2w++;
        } else if (p1 == 3 && p2 == 2){
            printf("玩家出布，電腦出石頭，玩家獲勝。\n");
            p1w++;
        }
        printf("目前比數:%d:%d\n",p1w,p2w);
        if (p1w<wc&&p2w<wc&&i==ac-1){
            printf("和局再一局\n");
            i--;
        }
    }
    if ((p1w==p2w)||(p1w<wc && p2w<wc)){
        printf("平手 比數%d:%d\n==========================", p1w, p2w);
    } else if (p1w > p2w){
        printf("玩家贏了，比數%d:%d\n==========================", p1w, p2w);
    } else if (p1w < p2w){
        printf("電腦贏了，比數%d:%D\n==========================", p1w, p2w);
    }
    return 0;
}


