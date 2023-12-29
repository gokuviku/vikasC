#include<stdio.h>
int main()
{
 int count=0,n,first;
    printf("\n enter number : ");
    scanf("%d",&n);
   
    while(n>0){
        first = n%10;// 123 ->8 ->7 ->1
        n = n/10;// 678 ->67->6
        count++;
        }
      
        printf("\n total digit is %d : ",count);
        

return 0;
}