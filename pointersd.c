#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void size()
{
    char c = 'k';
    printf("%c, size:\t:%d\n", c, sizeof(c));

    int i = 5;
    printf("%d, size:\t:%d\n", i, sizeof(i));

    long l = 2147483647;
    printf("%ld, size:\t:%d\n", l, sizeof(l));
}

void assignment()
{
    int items[] = {5, 1, 4, 2, 8};
    printf("items, size:\t:%d\n", sizeof(items));

    int length = sizeof(items) / sizeof(items[0]);
    printf("items, length:\t:%d\n", length);
}

void basics()
{
    printf("pointers:\t%p\n", &basics);
    //printf("main\t:%p\n", &main);
    printf("printf:\t\t%p\n", &printf);

    //section 1
    int a = 0;
    int *pa; //pointer to int
    pa = &a; //address of a = pointer to int

    printf("%d\t%p\t%d\n", a, pa, *pa); //%p is for pointer / address
                                        //*pointer whats there where we are pointing
    a = 5;                              //updating through variable; *pa has the same
    printf("%d\t%p\t%d\n", a, pa, *pa);

    *pa = 10; //updating through pointer, a has the same
    printf("%d\t%p\t%d\n", a, pa, *pa);

    int *pb = malloc(sizeof(int));
    *pb = 100;
    printf("%p: %d\n", pb, *pb);

    //section 2: fun part
    pb = pb + 1; //thats why we need data type to pointer; so pointer arithmetics
                 //can work accordingly; int takes x bytes; adding 1 will add x bytes
    //meaning add 1 means = addmemory taken by whats pointer is pointing to = int
    //if pointer is pointing to array; we can iterate thats how array indices work
    //but where its pointing? unallocated memory, atleast not our memory
    printf("%p: %d\n", pb, *pb); //and whats there?
    //hmmm, yumm? argh?
}

void mallocArray()
{
    //5 items
    int *p = malloc(5 * sizeof(int));
    *(p + 0) = 5;
    *(p + 1) = 1;
    *(p + 2) = 4;
    p[3] = 2;
    p[4] = 8;

    for (int i = 0; i < 5; i++)
        printf("%d\t", p[i]);
    printf("\n");
}

typedef struct structStudent
{
    int rollNo;
    char nameFirst[100];
    char nameLast[100];

} Student;

void pointerStruct()
{
    Student *student = malloc(sizeof(Student));
    printf("Roll No:\t");
    scanf("%d", &student->rollNo);
    printf("First Name:\t");
    scanf("%s", student->nameFirst);
    printf("Last Name:\t");
    scanf("%s", student->nameLast);

    strcpy(student->nameFirst, "Abdullah");
    strcpy(student->nameLast, "Khurram");

    printf("%d:\t%s %s", student->rollNo, 
        student->nameFirst, student->nameLast);
}

int main()
{
    //basics();
    //printf("%d, %d, %d, %d", sizeof(int), sizeof(short), sizeof(int*), sizeof(short*));
    //mallocArray();

    //char a[50]; a = "Abdullah"; //doesnt work

    pointerStruct();

    return 1;
}