#include <stdio.h>

int main(void)
{
      char str[2][20] = {"Timeis money", "Have a good time"};
      puts(*(str));
      puts(*(str+1));
      return 0;
}