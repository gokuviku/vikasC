#include<stdio.h>
// prInt sum 1 to N
int main(){
    int i,n,sum=0;
    printf("\n enter input number.");
    scanf("%d",&n);
    // while(i<=n){
    //     sum+=i;
    //     i++;
    // }
    for(;i<=n;i++){   
        sum+=i;
    }

 printf("%d \n",sum);
    return 0;
}