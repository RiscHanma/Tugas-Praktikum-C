#include <iostream>
using namespace std;

int main() {
    int jam_masuk, jam_keluar, menit_masuk, menit_keluar;
    int biaya_parkir;

    printf("Masukkan jam masuk (0-23): ");
    scanf("%d", &jam_masuk);

    printf("Masukkan menit masuk (0-59): ");
    scanf("%d", &menit_masuk);

    printf("Masukkan jam keluar (0-23): ");
    scanf("%d", &jam_keluar);

    printf("Masukkan menit keluar (0-59): ");
    scanf("%d", &menit_keluar);

    // Konversi waktu masuk dan waktu keluar ke dalam menit
    int waktu_masuk = (jam_masuk * 60) + menit_masuk;
    int waktu_keluar = (jam_keluar * 60) + menit_keluar;

    // Menghitung lama parkir dalam menit
    int lama_parkir = waktu_keluar - waktu_masuk;

    if (lama_parkir <= 120) {
        biaya_parkir = 2000; // Biaya 2 jam pertama
    } else {
        int jam_berikutnya = (lama_parkir - 120 + 59) / 60; // Pembulatan ke atas
        biaya_parkir = 2000 + (jam_berikutnya * 500);
    }

    printf("Biaya parkir: %d Rupiah\n", biaya_parkir);

    return 0;
}
