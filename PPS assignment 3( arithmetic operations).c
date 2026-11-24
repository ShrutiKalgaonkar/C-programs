#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, ch;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1:
            c = a + b;
            printf("%d\n", c);
            break;

        case 2:
            d = a - b;
            printf("%d\n", d);
            break;

        case 3:
            e = a * b;
            printf("%d\n", e);
            break;

        case 4:
            f = a / b;
            printf("%d\n", f);
            break;

        case 5:
            printf("Exiting...\n");
            break;

        default:
            printf("\nInvalid number.\n");
            break;
    }

    return 0;
}
