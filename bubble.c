#include <stdio.h>
#define LENGTH 5

//int data[] = {5, 1, 4, 2, 8};
int data[] = {9, 3, 1, 7, 8};

void print()
{

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d\t", data[i]);
    }
    printf("\n");
}

void sort()
{
    for (int i = 0; i < LENGTH - 1; i++)
    {
        for (int j = 0; j < LENGTH - i - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                int temporary = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temporary;
            }
        }
    }
}

void bubble_sort()
{
    int swap = 0;
    do
    {
        swap = 0;
        for (int i = 0; i < LENGTH - 1; i++)
        {
            if (data[i] > data[i + 1])
            {
                swap = 1;
                int temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
            }
        }
        print();

    } while (swap > 0);
}

int main()
{
    //sort();
    print();
    bubble_sort();
    //print();

    return 1;
}