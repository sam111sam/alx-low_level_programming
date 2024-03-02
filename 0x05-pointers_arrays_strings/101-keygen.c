#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry
 * Return: 0
 *
 */
int main(void)
{
        int sum = 0;
        int c;
        srand(time(NULL));
        while (sum < 2772)
        {
                c = (rand() % (126 -33 -1)) + 33;
                if (2772 - sum >= 33 && 2772 - sum <= 126)
                       c = 2772 - sum;
                if (sum + c <= 2772 && (2772 - sum  - c >= 33 || 2772 - sum - c == 0))
                {
                        sum += c;
                        printf("%c",c);
                }
        }
        printf("\n");
        return 0;
}
