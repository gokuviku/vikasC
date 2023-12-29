#include<stdio.h>
int main(){
// int 1,2,3,4,5,6;
int ch;
printf("/n enter number for month");
scanf("%d",&ch);

switch(ch){
  case 1 :
  printf("/n month is : january");
  break;

  case 2 :
  printf("/n month is : february");
  break;

  case 3 :
  printf("/n month is : march");
  break;

  case 4 :
  printf("/n month is : april");
  break;

  case 5 :
  printf("/n month is : may");
  break;

  case 6 :
  printf("/n month is : june");
  break;

  case 7 :
  printf("/n month is : july");
  break;

  case 8 :
  printf("/n month is : august");
  break;

   case 9 :
  printf("/n month is : september");
  break;

  case 10 :
  printf("/n month is : october");
  break;

  case 11 :
  printf("/n month is : november");
  break;

  case 12 :
  printf("/n month is : december");
  break;

 default : {
  printf("invalid input");
}
}
return 0;
}