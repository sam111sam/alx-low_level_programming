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
                c = (rand() % (126 -0 -1)) + 0;
                if (sum + c <= 2772)
                {
                        sum += c;
                        printf("%c",c);
                }
        }
        printf("\n");
        return 0;
}
