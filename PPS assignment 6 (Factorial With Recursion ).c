#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid input");
    }
    else if (n > 12)
    {
        printf("Number is too large for int");
    }
    else
    {
        printf("Factorial = %d", factorial(n));
    }

    return 0;
}
