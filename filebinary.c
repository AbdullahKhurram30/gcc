#include <stdio.h>
#include <string.h>

int main()
{
    int kit = 7357;
    char c = 'A';
    char name[10] = "Abdullah";

    FILE * fw, * fr;

    fw = fopen("filebinary.bin", "wb");
    if (fw == NULL) return -1;
    fwrite(&kit, sizeof(int), 1, fw);
    fwrite(&c, sizeof(char), 1, fw);
    fwrite(&name, sizeof(name), 1, fw);
    fclose(fw);

    kit = 7358;
    c++;
    strcpy(name, "Ibrahim");

    //opening the file in binary mode and reading it
    fr = fopen("filebinary.bin", "rb");
    if (fr == NULL) return -1;
    
    fread(&kit, sizeof(int), 1, fr);
    fread(&c, sizeof(char), 1, fr);
    fread(&name, sizeof(name), 1, fr);

    fclose(fr);
    
    //printing the final values
    printf("Read kit: %d\n", kit);
    printf("Read character: %c\n", c);
    printf("Read name: %s\n", name);
    
    return 1;
}