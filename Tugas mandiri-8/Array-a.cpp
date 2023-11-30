#include <stdio.h>

int main() {
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999}; // Data yang sudah diberikan
    int array_hasil[15]; // Array untuk menyimpan data yang diinput (maksimal 15 elemen)
    int index_array = 0; // Indeks untuk array_hasil
    int i;

    // Memasukkan data ke dalam array hasil
    printf("Data yang dimasukkan ke dalam array:\n");
    for (i = 0; i < 15; i++) {
        if (data[i] != 999) {
            array_hasil[index_array] = data[i];
            index_array++;
            printf("%d ", data[i]);
        } else {
            break; // Berhenti saat bertemu dengan 999 (End Of Data)
        }
    }

    return 0;
}
