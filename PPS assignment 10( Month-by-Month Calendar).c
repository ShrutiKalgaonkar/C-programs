#include <stdio.h>
#include <time.h>

int main()
{
    int year, month, day;
    int days, firstDay;
    int i;

    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int monthDays[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    printf("Enter year: ");
    scanf("%d", &year);

    /* Check leap year */
    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
    {
        monthDays[1] = 29;
    }

    for (month = 0; month < 12; month++)
    {
        struct tm date = {0};

        date.tm_year = year - 1900;
        date.tm_mon = month;
        date.tm_mday = 1;

        mktime(&date);

        firstDay = date.tm_wday;
        days = monthDays[month];

        printf("\n\n      %s %d\n", months[month], year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        /* Print spaces before the first day */
        for (i = 0; i < firstDay; i++)
        {
            printf("    ");
        }

        /* Print dates */
        for (day = 1; day <= days; day++)
        {
            printf("%4d", day);

            if ((day + firstDay) % 7 == 0)
            {
                printf("\n");
            }
        }

        printf("\n");
    }

    return 0;
}
