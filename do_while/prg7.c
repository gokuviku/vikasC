#include<stdio.h>
// leap year from 2000 to 3000

int main(){    
    int i=2000,count;
    printf("\n all leap year from 2000 to 3000 are : ");
    do{
        if(i%4==0){
        printf("\n %d",i);
        count++;
        }
        i++;
    }
    while(i<=3000);
        printf("\n total no of leap year is : %d",count);

    
    return 0;
}