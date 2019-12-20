#include <stdio.h>

int main(){

    int input_num,count,cache=0;

    while (scanf("%d",&input_num)!=EOF){
        if (input_num == 1){
            printf("%d\n", 1);
        } else {
            for (count = 2; count <= input_num; count++)
            {
                cache = 0;
                while (input_num % count == 0)
                {
                    input_num /= count;
                    cache++;
                }
                if (input_num == 1)
                {
                    if (cache > 1)
                    {
                        printf("%d^%d\n", count, cache);
                    }
                    else if (cache == 1)
                    {
                        printf("%d\n", count);
                    }
                }
                else
                {
                    if (cache > 1)
                    {
                        printf("%d^%d * ", count, cache);
                    }
                    else if (cache == 1)
                    {
                        printf("%d * ", count);
                    }
                }
            }
        }
    }
    return 0;    
}