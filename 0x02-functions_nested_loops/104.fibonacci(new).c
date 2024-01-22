#include <stdio.h>
int main(void)
{
        unsigned long  int first_l =0,first_r=1,second_l=0,second_r=2,total_l,total_r;
        int i = 0;
        printf("%lu %lu, ",first_r,second_r);
        while (i < 97)
        {

                total_r = (first_r + second_r)% 100;
                if (first_r + second_r > 99)
                {
                        total_l = first_l + second_l +1;
                }
                else
                {
                        total_l = first_l + second_l;
                }
                if (total_l > 0)
                        printf("%lu",total_l);
                printf("%lu",total_r);
                if (i != 96)
                        printf(", ");
                first_l =second_l;
                first_r = second_r;
                second_r = total_r;
                second_l = total_l;
                i++;
        }
        printf("\n");
        return 0;
}
