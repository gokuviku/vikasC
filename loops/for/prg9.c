// calculate the factorial of N.
#include<stdio.h>
// prInt sum 1 to N
int main(){
    int i=1,n,mult=1;
    printf("\n enter input number.");
    scanf("%d",&n);
    // while(i<=n){
    //     mult*=i;
    //     i++;
    // }
    for(;i<=n;i++){
        mult*=i;
    }
 printf("%d \n",mult);
    return 0;
}