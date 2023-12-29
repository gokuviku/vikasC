#include<stdio.h>
//  multiplication table of N
int main(){
    int init=1,input,mult;
    printf("\n enter input number.");
    scanf("%d",&input);
    do{
        mult=init*input;
        printf("\n %d * %d = %d",input,init,mult);
        init++;
    }
    while(init<=10);

    return 0;
}