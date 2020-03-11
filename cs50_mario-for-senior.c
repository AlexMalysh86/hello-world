#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    for (int i = 1; i <= n; i++)
    {
      for (int d = n; d > i; d--)
        {
            printf(" ");
        }
       for (int j = 0; j < i; j++)
            {
                printf("#");
            }
                printf("  ");
        for (int t = 0; t < i; t++)
                {
                    printf("#");
                }
                    printf("\n");
    }

}
