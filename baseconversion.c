#include<stdio.h>

char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 
'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 
'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

void baseconversion(int a, int b)
{
    int number = a;
    int base = b;
    int q, r;
    int divisions = 0;
    while (a > 0)
    {
        q = a / b;
        a = q;
        divisions++;
    }
    int quotient;
    int i = 0;
    int converted[100] = {};
    while (number > 0)
    {
        quotient = number / base;
        r = number % base;
        number = quotient;
        converted[divisions - 1] = r;
        divisions--;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        printf("%c", digits[converted[j]]);
    }
}

int main()
{
    baseconversion(10, 16);
    return 1;
}