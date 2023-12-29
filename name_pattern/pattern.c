// Online C compiler to run C program online
#include<stdio.h>

int new_pattern(){
    printf("--------- \n");
    printf("|\t\t|\n");
    printf("|\t\t|\n");
    printf("v\t\t|\n");
    printf("i\t\t|\n");
    printf("k\t\t|\n");
    printf("a\t\t|\n");
    printf("s\t\t|\n");
    printf("|\t\t|\n");
    printf("|\t\t|\n");
    printf("---------\n");
}

int pattern(){
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("**\n");
    printf("*\n");
    
}

int advance_pattern(){
    printf("*\n");
    printf("*\n");
    printf("*\t\t\t\t\t\t\t\t* *\n");
    printf("*\t\t\t\t\t\t\t  *     *\n");
    printf("*\t\t * *\t\t\t   *\n");
    printf("*      *      *\t\t    *\n");
    printf("*    *\t\t    *      *\n");
    printf("*  *\t\t\t  *  *\n");
    printf("*\n");
}

void main(){

    printf("--------- \n");
    printf("|\t\t|\n");
    printf("|\t\t|\n");
    printf("| vikas\t|\n");
    printf("|\t\t|\n");
    printf("|\t\t|\n");
    printf("---------\n");
    
    pattern();
    new_pattern();
    advance_pattern();
    

    
}