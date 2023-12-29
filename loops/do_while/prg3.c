#include<stdio.h>
// print 1 to N using
int main(){
    int i,n;
    printf("\n enter input number.");
    scanf("%d",&n);
    do{
        printf("%d \n",i);
        i++;
    }
    while(i<=n);

    return 0;
}