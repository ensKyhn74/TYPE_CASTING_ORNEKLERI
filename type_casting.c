#include <stdio.h>

int main() 

{

  char harf = 'A';
  int ASCII_Karsilik = (int)harf;
  printf("%d\n",ASCII_Karsilik); // 65
  
  int sayi = 122;
  char ch = (char)sayi;
  printf("%c\n",ch); // z
  
  float ondalikliSayi = 2.56;
  int tamSayi = (int)ondalikliSayi; 
  printf("%d\n",tamSayi); // 2
  
  int m = -3;
  float n = (float)m;
  printf("%.2f\n",n); // -3.00

  printf("%d\n",(int)10.32 / (int)2.15); // 5
  printf("%.2lf",(double)-8 / (int)5.18); // -1.60

  return 0;

}