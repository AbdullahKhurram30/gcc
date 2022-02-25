#include <stdio.h>
#define MAXLEN 100

typedef struct stackresult
{
    int status;
    int value;
} Stackresult;


int items[MAXLEN];
int position = 0;

Stackresult push(int number)
{
    Stackresult r;
    
    items[position] = number;
    position++;
    
    if(position > MAXLEN)
    {
        r.status = 0;
    }
    
    else
        r.status = 1;

    
    return r;
}

Stackresult pop()
{
    Stackresult r;
    
    if(position > 0)
    {
        position--;
        r.status = 1;
        r.value = items[position];
    }
    
    else
    {
        r.status = 0;
    }
        
    return r;
}

int count()
{
    return position;
}

int main()
{
    push(1); 
    push(2);
    push(3);

    // while (count() > 0)
    while(1)
    {
        Stackresult r = pop();
        if (r.status == 0) break;

        printf("%d\n", r.value);
    }

    return 1;
}