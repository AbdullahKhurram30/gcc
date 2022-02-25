#include <stdio.h>

//declaring the structure
struct roster
{
    int rollno;
    int number;
};

int main()
{
    //declaring the pointers
    struct roster r;
    r.rollno = 7357;
    r.number = 1;

    FILE *fw, *fr;

    fw = fopen("filestruct.bin", "wb");
    if (fw == NULL)
        return -1;
    fwrite(&r, sizeof(struct roster), 1, fw);
    fclose(fw);

    //changing values to check if we were successful
    r.rollno = 7358;
    r.number = 2;

    fr = fopen("filestruct.bin", "rb");
    if (fr == NULL)
        return -1;
    fread(&r, sizeof(struct roster), 1, fr);
    printf("Number : %d\tRoll number: %d\n", r.number, r.rollno);
    fclose(fr);

    return 1;
}