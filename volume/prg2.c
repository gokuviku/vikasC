
#include<stdio.h>
 union mystruct {
    int roll_no;
    char name[20];
    float chemistry,physics,mathametics;
 }marks[5];

int main(){
    int i,n;
    float total;
    printf("\n enter num of students : ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++){
        printf("\n marks of student %d \n ",i+1);
       printf("\n enter roll no ::");
       scanf("%d", &(marks[i].roll_no));

       printf("\n enter name no ::");
       scanf("%s", &(marks[i].name));

       printf("\n enter chemistry_marks ->");
       scanf("%f", &(marks[i].chemistry));

       printf("\n enter physics ->");
       scanf("%f", &(marks[i].physics));

       printf("\n enter mathametics ->");
       scanf("%f", &(marks[i].mathametics));
    }

    for ( i = 0; i < n; i++){
        printf("\n marks of student %d \n ",i+1);
       total=(marks[i].chemistry+marks[i].physics+marks[i].mathametics)/300*100;//calculating average
       printf("\n average is => %.2f",total);
    }
    
    

return 0;
}