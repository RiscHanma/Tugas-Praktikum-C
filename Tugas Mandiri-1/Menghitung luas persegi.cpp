#include <stdio.h>

int main(){
  int p, l, luas;

  printf("Program C Menghitung Luas Persegi Panjang\n");
  printf("-----------------------------------------\n");

  printf("Masukkan panjang \t: ");
  printf("%d", &p);
  printf("Masukkan lebar  \t: ");
  printf("%d", &l);

  luas = p*l;

  printf("-----------------------------------------\n");
  printf("Hasil luas persegi panjang adalah %d\n", luas);
  printf("\n\n\n");

  return 0;
}