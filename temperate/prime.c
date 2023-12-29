#include<stdio.h>
int main()
{
int i=1,n,count;
printf("\n enter number : ");
scanf("%d",&n);
while (i<=n)
{
   if(n%i==0){
    count++;
   }
   i++;
}
if(count<=2){
    printf("\n number is prime number : ");
}else{
    printf("\n number is NOT prime number : ");

}
return 0;
}