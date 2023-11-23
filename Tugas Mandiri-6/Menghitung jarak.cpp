#include <stdio.h>

int main() {
    float kecepatan = 2.0; // Kecepatan dalam meter/detik
    int waktu = 100; // Waktu dalam detik

    // Menghitung jarak yang ditempuh dengan rumus jarak = kecepatan * waktu
    float jarak = kecepatan * waktu;

    printf("Jarak yang ditempuh setelah %d detik adalah: %.2f meter\n", waktu, jarak);

    return 0;
}
