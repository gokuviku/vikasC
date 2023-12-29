#include<stdio.h>
//  multiplication table of N
int main(){
    int init=1,input,mult;
    printf("\n enter input number.");
    scanf("%d",&input);
    // while(init<=10){
    //     mult=init*input;
    //     printf("\n %d * %d = %d",input,init,mult);
    //     init++;
    // }
    for(;init<=10;init++){
           mult=init*input;
        printf("\n %d * %d = %d",input,init,mult);}
    return 0;
}