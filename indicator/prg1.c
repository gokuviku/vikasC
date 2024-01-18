#include <stdio.h>

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int var1 = 5, var2 = 9;
    printf("\nBefore Swapping: var1 = %d, var2 = %d", var1, var2);

    swap(&var1, &var2);

    printf("\nAfter Swapping: var1 = %d, var2 = %d", var1, var2);
    return 0;
}