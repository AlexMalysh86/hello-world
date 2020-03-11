#include<cs50.h>
#include<math.h>
#include<stdio.h>

int main()
{
    int cents;

    do
    {
        float n = get_float("Change owed: ");
        cents = round(n * 100);
    }
    while (cents <= 0);

    int qua = cents / 25;
    int dim = (cents % 25) / 10;
    int nic = ((cents % 25) % 10) / 5;
    int pen = ((cents % 25) % 10) % 5;

    printf("%d\n", qua + dim + nic + pen);
}
