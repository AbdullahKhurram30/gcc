#include <stdio.h>

int josephus(int n, int k)
{
    int survivor = 0;
    for (int i = 1; i <= n; i++)
    {
        survivor = (survivor + k) % i;
    }
    return survivor + 1;
}

int main()
{
    printf("%d", josephus(11, 2));
    
    return 1;
}