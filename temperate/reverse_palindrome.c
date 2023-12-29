#include<stdio.h>
int main()
{
    int i,n,a,rev=0;
    printf("\n enter number : ");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        i=n%10;
        rev=(rev*10)+i;
        n=n/10;
    }
    printf("\n reverse no is %d",rev);
    if(a==rev){
        printf("\n number is palindrome");
    }else{
        printf("\n number is NOT palindrome");
    }
    

return 0;
}