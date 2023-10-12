#include <stdio.h>

int main(){
  printf("Program Menghitung Volume Bola\n");
  printf("--------------------------------------\n");

  const float PI = 3.14159;
  float volume, radius;

  // Input
  printf("Masukkan jari-jari dari bola : ");
  scanf("%f", &radius);

  // Calculate volume
  volume = (4 * PI * radius * radius * radius)/3;

  // Output
  printf("--------------------------------------\n");
  printf("Hasil perhitungan dari volume bola adalah %.2f", volume);
  printf("\n\n\n");

  return 0;
}