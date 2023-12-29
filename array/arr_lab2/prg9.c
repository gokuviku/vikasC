#include<stdio.h>
int main(){
    int a[20][20],i,j,m,n,sum=0,mat;
    printf("enter size of row and colume::");
    scanf("%d %d",&m,&n);

    printf("enter elements:");
    for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < n; j++)
       {
       scanf("%d",&a[i][j] );
       } 
    }
    printf("\n matrix \n");
    mat=i-1;
    if(m==n){
     for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < n; j++)
       {
        if (i==j || i+j==mat)
        {
            sum=sum+a[i][j];
        }
        
       printf(" %d",a[i][j]);
       
       } 
       printf("\n");
    }
     printf("\n sum of cross-diagonal = %d",sum);
    }
        else{
        printf("\n not a matrix.");

        }


    return 0;
}