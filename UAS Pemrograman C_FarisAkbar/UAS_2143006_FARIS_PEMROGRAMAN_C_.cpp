#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Array untuk menyimpan level kekeruhan air
int kekeruhan_air[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

// Fungsi untuk menghitung kecepatan motor berdasarkan level kekeruhan air
int hitung_kecepatan_motor(int level) {
    if (level <= 12) {
        return 800;
    } else if (level <= 24) {
        return 1000;
    } else if (level <= 36) {
        return 1200;
    } else {
        return 1500;
    }
}

// Fungsi untuk mencuci berdasarkan level kekeruhan air
void mencuci(int level) {
    int kecepatan_motor = hitung_kecepatan_motor(level);
    int waktu_mencuci = 60;  // Waktu mencuci dalam menit

    printf("Memutar motor utama dengan kecepatan %d rpm\n", kecepatan_motor);
    sleep(waktu_mencuci);

    printf("Jeda selama 2 menit untuk membuang air kotor\n");
    sleep(2 * 60);

    printf("Memutar motor pembuka klep pembuangan air\n");
    sleep(1);

    printf("Jeda selama 3 menit untuk mengeringkan cucian\n");
    sleep(3 * 60);

    printf("Mencuci selesai\n");
}

int main() {
    // Simulasi membaca nilai level kekeruhan air dari sensor turbidimeter
    int level_turbidimeter;
    printf("Masukkan nilai level kekeruhan air: ");
    scanf("%d", &level_turbidimeter);

    // Cek apakah nilai level kekeruhan air valid
    if (level_turbidimeter < kekeruhan_air[0] || level_turbidimeter > kekeruhan_air[8]) {
        printf("Nilai level kekeruhan air tidak valid\n");
        return 1;  // Keluar dari program dengan kode error
    }

    // Temukan level kekeruhan air yang terdekat pada array
    int i;
    for (i = 0; i < 8; ++i) {
        if (level_turbidimeter <= kekeruhan_air[i + 1]) {
            break;
        }
    }

    // Lakukan pencucian berdasarkan level kekeruhan air
    printf("Memulai pencucian dengan level kekeruhan air %d\n", kekeruhan_air[i]);
    mencuci(kekeruhan_air[i]);

    return 0;  // Keluar dari program tanpa error
}
