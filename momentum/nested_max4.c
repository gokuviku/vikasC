#include<stdio.h>
int main(){
int a,b,c,d;
printf("Enter the any four value : ");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b){
  if(a>c){
    if(a>d){
      printf("/n a is maximum");
    }else{
        printf("/n d is maximum");
    }}
  if(c>d){
    printf("/n c is maximum");
  }else{
    printf("/n d is maximum");
  }}
if(b>c){
  if(b>d){
    printf("/n b is maximum");
  }else{
    printf("/n d is maximum");
  }
}
  return 0;
}