#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N, i, found = 0;

    printf("Masukkan bilangan integer: ");
    scanf("%d", &N);

    printf("%d ", N);
    for (i = 0; i < 11; i++) {
        if (A[i] == N) {
            printf("\nADA\nLokasi bilangan yang sama: %d", i);
            found = 1;
        }
    }

    if (found == 0) {
        printf("\nTIDAK ADA\n");
    }

    return 0;
}

