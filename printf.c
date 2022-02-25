#include <stdio.h>
#include <stdlib.h>

int main()
{

    //printf("Hello people");
    // \n for new line
    // single \ for special text e.g. "hello\"world"
    //printf("%d", 500);
    //use format specifier if other than text.
    // %d for integer, %s for string, %f for decimal number, $c for single character 
    //printf("My fav %s is %d", "number", 500);
    //printf("My fav %s is %f", "number", 500.987);
    int favint = 97;
    char myChar = 'I';
    
    printf("My fav %c is %d", myChar, favint);


    return 0;
}