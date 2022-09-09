#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* pFile;
    int c;
    int n;
    fpos_t pos;

    pFile = fopen("dataSaya.txt", "r");

    if (pFile == NULL) {
        perror("Kesalahan saat membuka file");
    } else {
        c = fgetc(pFile);
        printf("Karakter pertama adalah %c\n", c);
        fgetpos(pFile, &pos);

        for (n = 0; n < 3; n++) {
            fsetpos(pFile, &pos);
            c = fgetc(pFile);
            printf("Karakter kedua adalah %c\n", c);
        }

        fclose(pFile);
    }

    _getch();
    return 0;
}