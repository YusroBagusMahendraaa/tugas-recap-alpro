#include <stdio.h>

int main()
{
    int jumlahTransaksi;
    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &jumlahTransaksi);

    if (jumlahTransaksi <= 0)
    {
        printf("Tidak ada transaksi hari ini.");
    }
    else
    {
        int nominal, total = 0, i = 1;
        while (i <= jumlahTransaksi)
        {
            printf("Masukkan nominal transaksi ke-%d: ", i);
            scanf("%d", &nominal);
            total += nominal;
            i++;
        }
        printf("Total pengeluaran hari ini: %d", total);
    }

    return 0;
}