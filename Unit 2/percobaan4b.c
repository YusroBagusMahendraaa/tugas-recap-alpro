#include <stdio.h>

int i, j;

int main()
{

    for (i = 2; i <= 3; ++i)
    {
        printf("Bilangan utama: %d\n", i);

        for (j = 1; j <= 2; ++j)
        {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
        }
    }

    return 0;
}

// Program tersebut menggunakan perulangan for bersarang untuk melakukan iterasi atau perulangan

// Program ini memberikan output yang menunjukkan hasil perkalian antara bilangan utama dan bilangan pengali

// Pada perulangan pertama, variable i digunakan untuk mengiterasi nilai dari 2 hingga 3. Setiap iterasi dari i, program mencetak pesan "Bilangan utama: " diikuti dengan nilai i
// Pada perulangan kedua yang berada di dalam perulangan pertama, variable j digunakan untuk mengiterasi nilai dari 1 hingga 2. Setiap iterasi dari j, program mencetak pesan "Bilangan pengali: " diikuti dengan nilai j. Kemudian program mencetak hasil perkalian antara i dan j dengan pesan "Hasil perkalian: "

// Kedua perulangan tersebut dilakukan secara berulang sampai kondisinya sudah tidak memenuhi lagi

// Output yang dihasilkan
// Bilangan utama: 2
//  Bilangan pengali: 1
//   Hasil perkalian: 2

//  Bilangan pengali: 2
//   Hasil perkalian: 4

// Bilangan utama: 3
//  Bilangan pengali: 1
//   Hasil perkalian: 3

//  Bilangan pengali: 2
//   Hasil perkalian: 6