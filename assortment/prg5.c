#include<stdio.h>
int main()
{
    int a[30][30],m,n,i,j;
    printf("Enter size of 2dArray row&column : ");
    scanf("%d %d",&m,&n);
    printf("\nenter elements of array:: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
         scanf("%d",&a[i][j]);
        }       
    }

     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        printf("%d",a[i][j]);
           
        } 
        printf("\n");      
    }

    printf("\n after transpose new array is :\n");

     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        printf("%d",a[j][i]);
           
        } 
        printf("\n");      
    }
 
return 0;
}
