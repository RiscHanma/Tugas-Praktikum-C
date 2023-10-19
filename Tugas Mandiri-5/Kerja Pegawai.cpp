#include <iostream>

int main() {
    int jam_masuk, menit_masuk, jam_pulang, menit_pulang;

    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jam_masuk);

    printf("Masukkan menit masuk: ");
    scanf("%d", &menit_masuk);

    printf("Masukkan jam pulang (1-12): ");
    scanf("%d", &jam_pulang);

    printf("Masukkan menit pulang: ");
    scanf("%d", &menit_pulang);

    // Konversi jam masuk dan jam pulang ke dalam menit
    int waktu_masuk = (jam_masuk * 60) + menit_masuk;
    int waktu_pulang = (jam_pulang * 60) + menit_pulang;

    // Menghitung lama kerja dalam menit
    int lama_kerja = waktu_pulang - waktu_masuk;

    if (lama_kerja < 0) {
        printf("Jam pulang tidak boleh lebih awal daripada jam masuk.\n");
    } else if (lama_kerja >= 720) {
        printf("Seorang pegawai bekerja lebih dari 12 jam.\n");
    } else {
        int jam_lama_kerja = lama_kerja / 60;
        int menit_lama_kerja = lama_kerja % 60;

        printf("Lama kerja pegawai adalah %d jam %d menit.\n", jam_lama_kerja, menit_lama_kerja);
    }

    return 0;
}
