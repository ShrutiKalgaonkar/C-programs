#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char ch;

    source = fopen("input.txt", "r");

    if (source == NULL)
    {
        printf("Unable to open source file.");
        return 1;
    }

    destination = fopen("output.txt", "w");

    if (destination == NULL)
    {
        printf("Unable to open destination file.");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully.");

    return 0;
}
