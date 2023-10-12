#include<stdio.h>
#include<math.h>
main()
{
float alas,tinggi,miring;
printf(“\n==============================================\n”);
printf(“\n  Menghitung Sisi Miring Sigitiga Siku – Siku \n”);
printf(“\n==============================================\n”);
printf(“Masukkan nilai sisi alas = “);
scanf(“%f”,&alas);
printf(“Masukkan nilai sisi tinggi = “);
scanf(“%f”,&tinggi);
miring=sqrt(pow(alas,2)+pow(tinggi,2)); /*Penggunaan fungsi pow dan sqrt*/
printf(“Sisi miring segitiga dengan sisi alas %.2f dan sisi tinggi %.2f adalah %.2f\n”,alas,tinggi,miring);
printf(“\n”);
}