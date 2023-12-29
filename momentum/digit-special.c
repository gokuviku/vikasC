#include<stdio.h>
int main(){
char a;
printf("/n enter any charcter");
scanf("%c",&a);
if(a>='0' && a<='9'){
    printf("/n value is numeric");
}
else if(a>='a' && a<='z' || a>='A' && a<='Z'  ){
    printf("/n value is alphabet ");
}else{
    printf("/n value is special character ");
}

    return 0;
}