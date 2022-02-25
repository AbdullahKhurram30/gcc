#include <stdio.h>

int main()
{
    int input;
    int i = 1;
    //input = 7;

    printf("Enter an integer: \n");
    scanf("%d", &input);
    
    printf("The number you have chosen is: %d\n", input);
    
    while(i <= 10)
    {
        printf("%d x %d\t = %d\n", input, i, input * i);
        i++;
    }

    return 1;
}