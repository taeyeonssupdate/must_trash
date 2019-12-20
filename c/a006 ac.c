#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, temp;

    while (scanf("%d%d%d", &a, &b, &c) != EOF){
        if (b * b - 4 * a * c < 0){
            printf("No real root\n");
        }

        if (b * b - 4 * a * c == 0){
            printf("Two same roots x=%d\n", -b / (2 * a));
        }

        if (b * b - 4 * a * c > 0){
            temp = sqrt(b * b - 4 * a * c);
            printf("Two different roots x1=%d , x2=%d\n", (-b + temp) / (2 * a), (-b - temp) / (2 * a));
        }
    }
    return 0;
}
