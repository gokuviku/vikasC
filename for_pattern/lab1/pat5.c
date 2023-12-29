#include<stdio.h>
int main(){
int r,c,k;
for(r=1;r<=5;r++){
    for(c=5;c>=r;c--){
        printf("%d ",r);
        
    }
    printf("\n");
}
return 0;
}