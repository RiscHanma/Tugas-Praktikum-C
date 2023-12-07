#include <stdio.h>

int main() {
    int A[5] = {12, 8, 17, 5, 15};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12];
    int i, j = 0;

    // Menyalin nilai yang lebih besar dari 10 dari array A ke array C
    for (i = 0; i < 5; i++) {
        if (A[i] > 10) {
            C[j] = A[i];
            j++;
        }
    }

    // Menyalin nilai yang lebih besar dari 10 dari array B ke array C
    for (i = 0; i < 7; i++) {
        if (B[i] > 10) {
            C[j] = B[i];
            j++;
        }
    }

    // Mencetak isi array C setelah penyalinan
    printf("a. ");
    for (i = 0; i < j; i++) {
        printf("%d ", C[i]);
    }
    
    printf("\nb. ");

    // Mengurutkan isi array C dengan menggunakan bubble sort
    for (i = 0; i < j - 1; i++) {
        for (int k = 0; k < j - i - 1; k++) {
            if (C[k] > C[k + 1]) {
                int temp = C[k];
                C[k] = C[k + 1];
                C[k + 1] = temp;
            }
        }
    }

    // Mencetak isi array C setelah diurutkan
    for (i = 0; i < j; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
