#include<stdio.h>
// print N to 1
int main(){
    int i;
    printf("\n enter input number.");
    scanf("%d",&i);
    do{
        printf("%d \n",i);
        i--;
    }
    while(i>=1);

    return 0;
}