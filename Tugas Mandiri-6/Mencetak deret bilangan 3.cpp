#include <stdio.h>

int main() {
    int i;
    int hasil = 1; // Inisialisasi nilai awal
    
    // Menggunakan perulangan untuk mencetak deret bilangan dengan hasil pangkat dua
    for (i = 1; i <= 10; i++) {
        printf("%d ", hasil);
        hasil *= 2; // Mengalikan nilai dengan 2 untuk mendapatkan hasil pangkat dua berikutnya
    }
    
    return 0;
}
