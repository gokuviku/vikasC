#include<stdio.h>
int main(){
    int a[40],i,n;
    printf("enter array size:");
    scanf("%d",&n);
    printf("\n enter elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("\n print all negative elements in an array ");
    for ( i = 0; i < n; i++){
        if (a[i]<0)
        {
            printf("%d \n",a[i]);
        }else{
             printf("\n NOt any negative elements in an array ");
        }
        
    }
    
    return 0;
}