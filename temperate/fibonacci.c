#include <stdio.h>
int main()
{
    long int fst = 0, scd = 1,i=1, t, n;
    printf("\n enter any number for fibonaci series  :");
    scanf("%d", &n);
    while (i<=n)
    {
        printf("%ld \n",fst);
        t = fst + scd;
        fst = scd;
        scd = t;
        n++;
    }

    return 0;
}