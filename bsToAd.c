/* Program to convert BS to AD */
#include <stdio.h>
void main()
{
    int year, month, date;

    /* Taking Input from User */
    printf("Give BS date in year month and date:\n");
    scanf("%d%d%d", &year, &month, &date);
    /* Changing Date */
    if (date > 17)
    {
        date -= 17;
    }
    else
    {
        date += 30;
        --month;
        date -= 17;
    }

    if (month > 8)
    {
        month -= 8;
    }
    else
    {
        month += 12;
        --year;
        month -= 8;
    }
    year -= 56;

    /* Display Output */
    printf("Date in AD is : %d-%d-%d\n", year, month, date);
}