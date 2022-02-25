#include <stdio.h>
#include <stdlib.h>
#define LENGTH 3

typedef struct student
{
    char nameFirst[20];
    char nameLast[20];
    int rollNo;
} Student;

void basics()
{
    printf("pointers:\t%p\n", &basics);
    printf("printf:\t\t%p\n", &printf);

    //section 1
    int a = 0;
    int *pa;
    pa = &a;

    printf("%d\t%p\t%d\n", a, pa, *pa);

    a = 5;
    printf("%d\t%p\t%d\n", a, pa, *pa);

    *pa = 10;
    printf("%d\t%p\t%d\n", a, pa, *pa);

    int *pb = malloc(sizeof(int));
    *pb = 100;
    printf("%p: %d\n", pb, *pb);

    //section 2
    pb = pb + 1;
    printf("%p: %d\n", pb, *pb);
}

void mallocArray()
{
    int *p = malloc(5 * sizeof(int));
    *(p + 0) = 5;
    *(p + 1) = 1;
    *(p + 2) = 4;
    p[3] = 2;
    p[4] = 8;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", p[i]);
    }
    printf("\n");
}

void size()
{
    printf("size of various data types in bytes:-\n");
    printf("integer: %d\n", sizeof(int));
    printf("short: %d\n", sizeof(short));
    printf("pointer to integer: %d\n", sizeof(int *));
    printf("pointer to short: %d\n", sizeof(short *));
    printf("\n");
}

void arrayStudents()
{
    Student students[LENGTH] = {
        {"Abdullah", "Khurram", 1001},
        {"Ibrahim", "Khurram", 1002},
        {"Khurram", "Aziz", 1003}};

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%s %s %d\n", students[i].nameFirst, students[i].nameLast, students[i].rollNo);
    }
}

int main()
{
    //basics();
    //printf("\n");
    //mallocArray();
    //printf("\n");
    //size();
    arrayStudents();

    return 1;
}