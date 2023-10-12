#include <stdio.h>
#include <stdlib.h>

int main(){

  int menu;
  float r, f;

  while(1) {
    
    printf("\n------- Menu Konversi Suhu -------\n");
    printf("1. Konversi Reamur (R) \n");
    printf("2. Konversi Fahrenheit (F) \n");
    printf("3. Keluar program \n");
    printf("------------------------------\n");

    printf("Pilih nomor menu: ");
    scanf("%d",&menu);
    fflush(stdin);

    if(menu == 1){

      printf("Masukkan nilai Reamur: ");
      scanf("%f",&r);

      f = (r*9/4)+32;

      printf("Nilai Reamur dalam Fahrenheit adalah %.2f\n", f);
      printf("\n");

    } else if (menu == 2){
    
	  printf("Masukkan nilai Fahrenheit: ");
      scanf("%f", &f);

      r = (f*4/9)-32;

      printf("Nilai Fahrenheit dalam Reamur adalah %.2f\n",r);
      printf("\n");	
    	


    } else if (menu == 3){
	  exit(0);
    } else {
      printf("Menu yang anda input salah");
    }

  }
  return 0;
}
