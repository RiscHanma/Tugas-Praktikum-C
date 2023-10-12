#include <stdio.h>

int main(){
  // variable declaration
  float a, t, luas;
  
  printf("Program Menghitung Luas Segitiga\n");
  printf("--------------------------------\n");

  // input value: alas & tinggi dari segitiga
  printf("Masukkan Alas dari Segitiga \t: ");
  scanf("%f", &a);
  printf("Masukkan Tinggi dari Segitiga \t: ");
  scanf("%f", &t);

  // calculate triangle area
  luas = (a*t)/2;

  // print result
  printf("--------------------------------\n");
  printf("Hasil perhitungan dari luas segitiga adalah %.2f\n", luas);

  return 0;
}