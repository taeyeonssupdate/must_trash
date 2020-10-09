#include <stdio.h>
float ar[] = {};
int main(void)
{
    short lp_run, CC;
    int ar_mm, ar_in, ar_out, fi;
    float scan_in, aral, big, sss;
    printf("\n------------------------------------------------------------------------------------\n");
    lp_run = 1;
    ar_mm = 20;
    ar_in = 0;
    aral = 0;
    big = 0;
    sss = 0;
    printf("\n { Input array } :\n");
    while (lp_run)
    {
        printf("IN [%d] -> ", ar_in + 1);
        scanf("%f", &scan_in);
        if (scan_in != -1)
        {
            aral += scan_in;
            if (ar_in)
            {
                if (scan_in > big)
                    big = scan_in;
                else if (scan_in < sss)
                    sss = scan_in;
            }
            else
            {
                big = scan_in;
                sss = scan_in;
            }
            ar[ar_in] = scan_in;
            ar_in++;
            if (ar_in >= ar_mm)
            {
                lp_run = 0;
                printf(" { Out of memory } :\n");
            }
        }
        else
        {
            lp_run = 0;
            printf(" { END Input } :\n");
        }
        printf(" { Max = %f , MIN = %f , SUM = %f , MEAN = %f } \n", big, sss, aral, aral / ar_in);
    }
    printf("\n------------------------------------------------------------------------------------\n");
    lp_run = 1;
    CC = 1;
    ar_out = 0;
    printf("\n { Search array } :\n");
    while (lp_run)
    {
        printf("Search [%d] -> ", ar_out + 1);
        scanf("%f", &scan_in);
        if (scan_in != -1)
        {
            CC = 1;
            for (fi = 0; fi < ar_in; fi++)
            {
                if (ar[fi] == scan_in)
                {
                    printf(" { IN [%d] } \n", fi + 1);
                    CC = 0;
                }
            }
            if (CC)
                printf(" { NULL } \n");
            ar_out++;
        }
        else
        {
            lp_run = 0;
            printf(" { END Search } \n");
        }
    }
    return 0;
}