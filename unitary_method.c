#include <stdio.h>

int main()
{
    float requirement;
    int guests;

    requirement = 1.5 / 2;
    guests = 62;

    printf("Amount of scallops requred to feed %d guests is %.2f pounds", guests, requirement * guests);



    return 1;
}