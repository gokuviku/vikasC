

#include<stdio.h>
enum day{
    sunday=7,monday,tuesday,wednusday,thursday,friday,saturday
};
int main()
{
    for(int i=sunday;i<=saturday;i++){
        printf("\n %d",i);
    } 
return 0;
}