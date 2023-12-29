#include<stdio.h>
int main(){
int a,b,c,d;
printf("Enter the any four value : ");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a<b){
  if(a<c){
    if(a<d){
      printf("/n a is minimum");
    }else{
        printf("/n d is minimum");
    }}
  if(c<d){
    printf("/n c is minimum");
  }else{
    printf("/n d is minimum");
  }}
if(b<c){
  if(b<d){
    printf("/n b is minimum");
  }else{
    printf("/n d is minimum");
  }
}
  return 0;
}