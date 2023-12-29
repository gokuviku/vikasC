#include<stdio.h>
int main(){
int a,b,c ;
printf("Enter the any three value : ");
scanf("%d %d %d",&a,&b,&c);
if(a<b){
   if(a<c){
    printf("/n a is minimum");
  }
  else{
    printf("/n c is minimum");
  }  
}
else if(b<a){
  if(b<c){
    printf("/n b is minimum");
  }
  else{
    printf("/n c is minimum");
  }
}
  return 0;
}