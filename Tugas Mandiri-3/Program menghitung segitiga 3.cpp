#include <stdio.h>

int main() {

  int a, t;
  float luas;

  printf("Masukkan panjang alas nya: ");
  scanf("%d",&a);
  printf("Masukkan tinggi segitiga nya: ");
  scanf("%d",&t);

  luas = 0.5*a*t;

  printf("Luas segitiga nya adalah %2.f\n", luas);
}