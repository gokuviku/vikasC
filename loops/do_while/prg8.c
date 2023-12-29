#include<stdio.h>
// prInt sum 1 to N
int main(){
    int i,n,sum=0;
    printf("\n enter input number.");
    scanf("%d",&n);
    do{
        sum+=i;
        i++;
    }
    while(i<=n);
 printf("%d \n",sum);
    return 0;
}