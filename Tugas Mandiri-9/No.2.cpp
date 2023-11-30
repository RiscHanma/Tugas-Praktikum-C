#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char input;
    int i, count = 0;
  
    printf("Masukkan sebuah karakter: ");
    scanf(" %c", &input);

    for (i = 0; i < 10; i++) {
        if (A[i] == input) {
            count++;
        }
    }

    if (count > 0) {
        printf("ADA\nJumlah karakter yang sama: %d\n", count);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}

