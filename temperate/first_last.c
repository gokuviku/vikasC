#include<stdio.h>
int main()
{
 int count=0,sum=0,n,last,ans,first;
    printf("\n enter number : ");
    scanf("%d",&n);
   
    last = n%10;// 123 ->1 ->2 ->3
    while(n>0){
        first = n%10;// 123 ->8 ->7 ->1
        n = n/10;// 678 ->67->6
        count++;
        sum = sum+first;
        }
        ans=first+last;
        printf("\n sum is %d : ",sum);
        printf("\n total digit is %d : ",count);
        printf("\n first and last sum is %d : ",ans);
        

return 0;
}