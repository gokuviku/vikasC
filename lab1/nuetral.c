#include<stdio.h>

int main(){

    int a;
    printf("/n enter any number");
    scanf("%d",&a);

    if(a>0){
        printf("/n number is positive");
    }
    else if(a<0){
            printf("/n number is negative");
            }
    else{
        printf("/n number is is nuetral");
    }
    
    return 0;
}