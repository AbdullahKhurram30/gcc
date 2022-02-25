//program requirements
//conversion by %
//no global or static variables

//hints
//man printf
//man 3 stdarg

//authorized functions
// write(2)
// malloc
// free
// va start, va arg, va copy, va end (man 3 stddarg)

//can't use printf

//requirements
//0 & 1 -- my_print("Hello world!\n") -> Hello world! & size = 13
//2 & 3 -- my_print("%c!\n", "H") -> H! & size = 3
//4 & 5 -- my_print("%c%c%c%c%c!\n", 'H', 'e', 'l', l', 'o') -> Hello! & size = 7
//6 & 7 -- my_print("Hello %s!\n", "QWASAR.IO") -> Hello QWASAR.IO! & size = 17
//8 & 9 -- my_print("Hello %s %s!\n", "Mr", "Gaetan") -> Hello Mr Gaetan! & size = 17
//10 & 11 -- my_print("NULL STRING %s!\n", (char*)NULL) -> NULL STRING (null)! & size = 20
//12 & 13 -- my_print("%d!\n", 1337) -> 1337! & size = 6
//14 & 15 -- my_print("%d - %d - %d!\n", 2048, 0, -1337) -> 2048 - 0 --1337! & size = 18
//16 & 17 -- my_print("%o!\n", 100) -> 144! & size = 5
//18 & 19 -- my_print("%u!\n", 1337) -> 1337! & size = 6
//20 & 21 -- my_print("%x!\n", 14) -> e! & size = 3
//22 & 23 -- my_print("%p!\n", any_variable) -> address! & size = 16

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void my_print(char parameter)
{
    char data[50];
    for (int i = 0; ;)
    puts(data);

    

}

int main()
{


    return 1;
}