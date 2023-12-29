// CRUD operations the element into array.
#include<stdio.h>
int main(){
    int a[40],i,n,nv,pos;
    printf("enter array size:");
    scanf("%d",&n);
    printf("\n enter elements::");
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("\n old elements \n");
    for ( i = 0; i < n; i++){
        printf("%d  ",a[i]);
    }

     printf("\n enter a new value:");
     scanf("%d",&nv);
     a[n]=nv;
     n++;

    printf("\n after insert array elements:");
    for ( i = 0; i < n; i++){
    printf("%d ",a[i]);
    }

    n--;
    printf("\n after delete array elements:");
    for ( i = 0; i < n; i++){
    printf("%d ",a[i]);
    }

    printf("\n enter a postion:");
    scanf("%d",&pos);

    printf("\n enter a new value:");
    scanf("%d",&nv);

    for ( i = 0; i < n; i++){
       if (i==pos){
          a[i]=nv;
        }
    }

    printf("\n after update  array elements:");
    for ( i = 0; i < n; i++){
    printf("%d ",a[i]);
    }
    
    return 0;
}