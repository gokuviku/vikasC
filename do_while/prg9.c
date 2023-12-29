// calculate the factorial of N.
#include<stdio.h>
// prInt sum 1 to N
int main(){
    int i=1,n,mult=1;
    printf("\n enter input number.");
    scanf("%d",&n);
    do{
        mult*=i;
        i++;
    }
    while(i<=n);
 printf("%d \n",mult);
    return 0;
}