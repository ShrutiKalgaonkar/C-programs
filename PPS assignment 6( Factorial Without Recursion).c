#include <stdio.h>

int factorial(int n)
{
    int i;
    int fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
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
