#include <stdio.h>

int main() {
    char jenis;
    float harga, diskon, harga_diskon;

    printf("Masukkan kode: ");
    int kode;
    scanf("%d", &kode);

    if (kode != 10) {
        printf("Kode yang dimasukkan tidak valid.\n");
        return 1;
    }

    printf("Masukkan jenis (A/B/C): ");
    scanf(" %c", &jenis);

    if (jenis != 'A' && jenis != 'B' && jenis != 'C') {
        printf("Jenis yang dimasukkan tidak valid.\n");
        return 1;
    }

    printf("Masukkan harga: ");
    scanf("%f", &harga);

    switch (jenis) {
        case 'A':
            diskon = 0.10;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.20;
            break;
    }

    harga_diskon = harga - (harga * diskon);

    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.0f\n", jenis, diskon * 100, harga_diskon);

    return 0;
}
