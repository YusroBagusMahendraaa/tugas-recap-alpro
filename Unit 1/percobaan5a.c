#include <stdio.h>

char fullname[30];

int main()
{
    printf("Masukan nama lengkap kamu: \n");
    scanf("%s", fullname);
    printf("Halo %s", fullname);
    return 0;
}

// Pada program pertama yang menggunakan scanf, input akan dihentikan pada saat spasi pertama ditemukan. Hal ini berarti jika variable fullname memiliki spasi, hanya bagian nama atau kata bagian pertama yang akan dibaca oleh scanf