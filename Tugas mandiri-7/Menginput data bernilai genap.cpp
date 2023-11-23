#include <stdio.h>

int main() {
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35}; // Data yang sudah diberikan
    int nilai_genap[11]; // Array untuk menyimpan nilai genap (jumlah maksimum nilai genap adalah 11)
    int index_genap = 0; // Indeks untuk nilai_genap array
    int i;

    // Mencetak data dari dokumen satu per satu
    printf("Data dalam dokumen:\n");
    for (i = 0; i < 11; i++) {
        printf("%d ", data[i]);

        // Menyimpan nilai genap ke dalam array nilai_genap
        if (data[i] % 2 == 0) {
            nilai_genap[index_genap] = data[i];
            index_genap++;
        }
    }

    // Mencetak nilai genap yang telah disimpan
    printf("\n\nNilai genap yang disimpan dalam array:\n");
    for (i = 0; i < index_genap; i++) {
        printf("%d ", nilai_genap[i]);
    }

    return 0;
}
