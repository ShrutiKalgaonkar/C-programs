```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a[100], b[100];
    int ch, i, result;

    printf("Menu:\n");
    printf("1. Find length\n");
    printf("2. Concatenate\n");
    printf("3. Copy\n");
    printf("4. Compare\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1:
            printf("Enter string:\n");
            scanf("%99s", a);

            i = strlen(a);

            printf("Length of string = %d\n", i);
            break;

        case 2:
            printf("Enter 1st string: ");
            scanf("%49s", a);

            printf("Enter 2nd string: ");
            scanf("%49s", b);

            strcat(a, b);

            printf("String after concatenation: %s\n", a);
            break;

        case 3:
            printf("Enter string 1: ");
            scanf("%99s", a);

            printf("Enter string 2: ");
            scanf("%99s", b);

            printf("String before copied: %s\n", a);

            strcpy(a, b);

            printf("String after copied: %s\n", a);
            break;

        case 4:
            printf("Enter first string: ");
            scanf("%99s", a);

            printf("Enter second string: ");
            scanf("%99s", b);

            result = strcmp(a, b);

            if (result == 0)
                printf("Both strings are equal\n");
            else if (result > 0)
                printf("First string is greater than second\n");
            else
                printf("First string is smaller than second\n");

            break;

        case 5:
            printf("Exit\n");
            break;

        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
```
