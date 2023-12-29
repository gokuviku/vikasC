#include<stdio.h>
// even no. from N to 1
int main(){
    int i=1,n;
    printf("\n enter input number.");
    scanf("%d",&n);
    // while(i<=n){
    //     if(i%2==0){
    //     printf("%d \n",i);
    //     }
    //     i++;
    // }
    for(;i<=n;i++){
         if(i%2==0){
        printf("%d \n",i);
        } 
    }

    return 0;
}