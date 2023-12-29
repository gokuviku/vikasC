#include<stdio.h>
int main()
{
    char i,j,k;
    for(i='A';i<='E';i++){
        for(j=i;j>='A';j--){
            printf("%c ",j);
            // k++;
        }
        printf("\n");
    }
return 0;
}