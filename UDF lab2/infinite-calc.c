#include <stdio.h>
// infiniteCalc(int i);
Add(float a, float b)
{
    return a + b;
}
Mult(float a, float b)
{
    return a * b;
}
Sub(float a, float b)
{
    return a - b;
}
Div(float a, float b)
{
    return a / b;
}

int main()
{
    float i, j, result;
    char ch;
    while (1)
    {

        printf("\nenter an operation");
        fflush(stdin);
        scanf("%c", &ch);
        if (ch == 'q')
        {
            printf("exit the calculator.\n");
            break;
        }
        printf("enter two values.");
        fflush(stdin);
        scanf("%f %f", &i, &j);

        switch (ch)
        {
        case '+':

            result = Add(i, j);
            printf("sum is %.2f", result);

            break;

        case '-':
            result = Sub(i, j);
            printf("minus is %.2f", result);
            break;

        case '/':
            result = Div(i, j);
            printf("division is %.2f", result);
            break;

        case '*':
            result = Mult(i, j);
            printf("Mult is %.2f", result);
            break;
        default:
            printf("entered operator is not valid,please check!");
        }
    }

    return 0;
}