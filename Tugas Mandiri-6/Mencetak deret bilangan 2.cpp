#include <stdio.h>

int main() {
    int i;
    
    // Menggunakan perulangan untuk mencetak deret bilangan dari 100 hingga 55 dengan selisih 5
    for (i = 100; i >= 55; i -= 5) {
        printf("%d ", i);
    }
    
    return 0;
}
