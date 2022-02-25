#include <stdio.h>

int main()
{
    int input;
    printf("Enter an integer: \n");
    scanf("%d", &input);

    for(int i = 0; i <= 50; i += 5)
        printf("%d x %d\t = %d\n", input, i, input * i);
    
    return 1;
}