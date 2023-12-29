#include<stdio.h>
int main(){
    int a[40],i,n,max;
    printf("enter array size:");
    scanf("%d",&n);
    printf("\n enter elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    max = a[0];

    for(i = 1; i < n; i++) {
      if( max < a[i] ) 
         max = a[i];
   }
   printf("max number of array %d",max);

    
    
    return 0;
}