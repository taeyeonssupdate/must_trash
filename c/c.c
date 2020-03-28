#include <stdio.h>
#define MAX 20

int main(){
    int i = 0, max = -1, min = -1, sum = 0, list[MAX], cache, x, y, found;
    while (i!=MAX){
        printf("第%d次輸入: ",i+1);
        scanf("%d",&list[i]);
        if (list[i] == -1){
            printf("使用完畢\n");
            break;
        }
        if (max == -1 || max < list[i]){
            max = list[i];
        }
        if (min == -1 || min > list[i]){
            min = list[i];
        }
        sum+=list[i];
        printf("最大值=%d, 最小值=%d, 總和=%d, 平均數=%d\n", max, min, sum, sum/(i+1));
        i++;
    }
    i=0;
    while (1){
        printf("第%d次輸入: ", i+1);
        scanf("%d", &cache);
        if (cache == -1){
            printf("結束查詢\n");
            break;
        }
        x = 0, found=0;
        while (x!=MAX){
            if (list[x] == cache){
                y=0;
                printf("找到了，在第");
                while (y!=MAX){
                    if (list[y] == cache){
                        printf(" %d", y + 1);
                        found=1;
                    }
                    y++;
                }
                printf("次輸入\n");
            }
            x++;
        }
        if (!found){
            printf("沒找到\n");
        }
        i++;
    }
}
