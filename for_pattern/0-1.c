#include <stdio.h>

int main() {
  int i, j, k;

  for (i =5; i >=1; i--) {
    for (j = i; j >=1; j--) {
        if((i+j)%2==0){
            printf("1 ");
        }else{
            printf("0 ");
        }
    }

    for (k =4; k >=i; k--) {
      printf("  ");
    }
     for (k =i; k<=4; k++) {
      printf("  ");
    }

    for (j = i; j>=1; j--) {
         if((i+j)%2==0){
            printf(" 1");
        }else{
            printf(" 0");
        }
   
    }

    printf("\n");
  }
  return 0;
}