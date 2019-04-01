#include<stdio.h>

int main() {
  char a,b;
  scanf("%c",&a);
  scanf("\t");
  scanf("%c",&b);
  if((a=='S')&&(b=='P')||(a=='P')&&(b=='S'))
  printf("S");
  if((a=='S')&&(b=='R')||(a=='R')&&(b=='S'))
  printf("R");
  if((a=='P')&&(b=='R')||(a=='R')&&(b=='P'))
  printf("P");
  if(a==b)
  printf("D");
}

