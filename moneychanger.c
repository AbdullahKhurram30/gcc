#include <stdio.h>

int main()
{
    int amount = 0;
    printf("How much money do you want?: \n");
    scanf("%d", &amount);

    int remaining = amount;

    int coin10 = remaining / 10;    remaining = remaining - 10 * coin10;
    int coin5 = remaining / 5;      remaining = remaining - 5 * coin5;
    int coin1 = remaining;

    if (coin10 > 0) printf("10 x %d\n", coin10);
    if (coin5 > 0) printf("5 x %d\n", coin5);
    if (coin1 > 0) printf("1 x %d\n", coin1);

    return 1;
}