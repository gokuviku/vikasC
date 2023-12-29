#include<stdio.h>
int main(){
// int 1,2,3,4,5,6;
int ch;
printf("/n enter first letter for week name");
scanf("%c",&ch);

switch(ch){
  case 'm' :
  printf("/n day is : monday");
  break;

  case 't' :
  printf("/n day is : tuesday");
  break;

  case 'w' :
  printf("/n day is : wednesday");
  break;

  case 'T' :
  printf("/n day is : thursday");
  break;

  case 'f' :
  printf("/n day is : friday");
  break;

  case 's' :
  printf("/n day is : saturday");
  break;

  case 'S' :
  printf("/n day is : sunday");
  break;
default : {
  printf("invalid input");
}
}
return 0;
}