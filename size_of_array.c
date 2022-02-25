#include <stdio.h>
#define LENGTH 6

void print()
{
    char c = 'k';
    printf("%c\n", c);
    printf("size: %d\n", sizeof(c));
    int i = 5;
    printf("%d\n", i);
    printf("size: %d\n", sizeof(i));
    long l = 1089524878;
    printf("%ld\n", l);
    printf("size: %d\n", sizeof(l));
    short s = 9;
    printf("%d\n", s);
    printf("size: %d\n", sizeof(s));
}

void length()
{
    int data[] = {9, 7, 4, 6, 1, 5};
    int size = sizeof(data) / sizeof(data[0]);
    printf("Array:\t");
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d\t", data[i]);
    }
    printf("\n");
    printf("size of array: %d", size);
}

int main()
{
    print();
    length();

    return 1;
}