#include <stdio.h>

int main() {
    float saldo_awal = 1000000; // Saldo awal di bank (Rp. 1.000.000)
    float bunga = 0.02; // Bunga 2% per bulan
    int jumlah_bulan = 10; // Jumlah bulan

    float saldo_akhir = saldo_awal; // Inisialisasi saldo akhir dengan saldo awal

    // Loop untuk menghitung saldo akhir setiap bulan
    for (int i = 1; i <= jumlah_bulan; i++) {
        saldo_akhir += saldo_akhir * bunga; // Menambahkan bunga ke saldo akhir setiap bulan
    }

    printf("Saldo akhir setelah %d bulan adalah: Rp. %.2f\n", jumlah_bulan, saldo_akhir);

    return 0;
}
