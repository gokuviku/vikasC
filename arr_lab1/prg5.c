
#include <stdio.h>

int main() {

  int a[20],b[30],c[50];
  int i,n,m,k,total;


  printf("Enter array1 size :");
  scanf("%d",&m);
  printf("enter elements of 1st  :");
    for(i=0; i<m; i++){
    scanf("%d", &a[i]);
    }      


  printf("Enter array2 size :");
  scanf("%d",&n);
  printf("enter elements of 2nd  :");
    for(i=0;i<n;i++) {
    scanf("%d", &b[i]);
    }    
total = m+n;
for ( i = 0; i <m; i++){
    c[i] = a[i];
}
for ( i = m; i <total; i++){
    c[i] = b[k];
    k++;
}
printf("\n merge is : ");
for ( i = 0; i <total; i++){
    printf("%d ",c[i]);
}


    

  return 0;
}
