#include <stdio.h>

// Definisikan level kekeruhan air
int kekeruhan_air[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

// Fungsi untuk menentukan kecepatan motor berdasarkan level kekeruhan air
int tentukanKecepatanMotor(int level_kekeruhan) {
    if (level_kekeruhan <= 6) {
        return 1000; // Kecepatan motor untuk level 6 NTU
    } else if (level_kekeruhan <= 18) {
        return 800; // Kecepatan motor untuk level 12-18 NTU
    } else {
        return 600; // Kecepatan motor untuk level di atas 18 NTU
    }
}

int main() {
    int level_air; // Variabel untuk menyimpan level kekeruhan air
    int kecepatan_motor;

    // Simulasikan pengisian air
    printf("Mesin cuci mulai mengisi air\n");
    // Anda dapat menambahkan kode untuk mengaktifkan motor pengisian air

    // Simulasikan deteksi level kekeruhan air
    printf("Masukkan level kekeruhan air (6, 8, 12, 18, 24, 30, 36, 42, 49): ");
    scanf("%d", &level_air);

    // Tentukan kecepatan motor berdasarkan level kekeruhan air
    kecepatan_motor = tentukanKecepatanMotor(level_air);

    // Mulai mencuci dengan kecepatan motor yang sesuai
    printf("Mulai mencuci dengan kecepatan motor %d rpm\n", kecepatan_motor);
    // Anda dapat menambahkan kode untuk mengaktifkan motor utama dan menghitung waktu mencuci

    // Simulasikan pembuangan air kotor
    printf("Mesin cuci membuang air kotor\n");
    // Anda dapat menambahkan kode untuk mengaktifkan motor pembuangan air kotor

    // Simulasikan proses pengeringan
    printf("Mulai pengeringan selama 3 menit\n");
    // Anda dapat menambahkan kode untuk mengaktifkan motor pengering

    // Proses mencuci selesai
    printf("Proses mencuci selesai!\n");

    return 0;
}
