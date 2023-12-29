#include<stdio.h>
// print N to 1
int main(){
    int i;
    printf("\n enter input number.");
    scanf("%d",&i);
    while(i>=1){
        printf("%d \n",i);
        i--;
    }

    return 0;
}