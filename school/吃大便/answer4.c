#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < atoi(argv[1]); i++){
        printf("Hello kitty!\n");
    }
    system("pause");
    return 0;
}
