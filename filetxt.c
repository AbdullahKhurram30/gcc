#include <stdio.h>
#include <string.h>

int main()
{
    //declaring variables
    int kit = 7357;
    char c = 'A';
    char name[10] = "Abdullah";

    //declaring pointers
    FILE *fw, *fr;

    //opening and writing into it
    fw = fopen("filetxt.txt", "w");
    if (fw == NULL) return -1;
    fprintf(fw, "%d\n", kit);
    fprintf(fw, "%c\n", c);
    fputs(name, fw);
    fclose(fw);

    //lets change values to see if they are in file
    kit = 7358;
    c++;
    strcpy(name, "Ibrahim");

    //read the file in text mode
    fr = fopen("filetxt.txt", "r");
    fscanf(fr, "%d\n", &kit);
    fscanf(fr, "%c\n", &c);
    fgets(name, 10, fr); //read whole array from stream
    fclose(fr);

    // //read the file in binary mode
    // fr = fopen("filetxt.txt", "rb");
    // fread(&kit, sizeof(int), 1, fr);
    // fread(&c, sizeof(char), 1, fr);
    // fread(&name, sizeof(name), 1, fr);

    //printing the final values
    printf("Read number: %d\n", kit);
    printf("Read character: %c\n", c);
    printf("Read name: %s\n", name);

    return 1;
}