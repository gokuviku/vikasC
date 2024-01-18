#include <stdio.h>

int main() {
    int arr[5], i,n;
    int *ptr = arr;

    printf("Enter number of elements: ");
        scanf("%d", &n);


    printf("Enter the elements:: ");
    for (i = 0; i < n; i++) {
        scanf("%d", ptr + i); //pointer is address already so not using addressof & operator to store
    }

    printf("You entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));//here we will use address
    }

    return 0;
}