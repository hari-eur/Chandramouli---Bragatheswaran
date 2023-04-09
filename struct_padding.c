#include <stdio.h>
struct time
{
    unsigned int seconds : 6;
    unsigned int minutes : 6;
    unsigned int hours : 5;
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year;
} t;
int main()
{
    int hours, minutes, seconds, day, month, year;

    printf("Enter Hours ");
    scanf("%d", &hours);
    t.hours = hours;
    printf("Enter Minutes ");
    scanf("%d", &minutes);
    t.minutes = minutes;
    printf("Enter Seconds ");
    scanf("%d", &seconds);
    t.seconds = seconds;
    printf("Enter Day ");
    scanf("%d", &day);
    t.day = day;
    printf("Enter Month ");
    scanf("%d", &month);
    t.month = month;
    printf("Enter Year ");
    scanf("%d", &year);
    t.year = year;

    printf("\nEntered Time:\n");
    printf("Hours: %u\n", t.hours);
    printf("Minutes: %u\n", t.minutes);
    printf("Seconds: %u\n", t.seconds);
    printf("Day: %u\n", t.day);
    printf("Month: %u\n", t.month);
    printf("Year: %u\n", t.year);

    printf("\nSize of struct time is %zu bytes.\n", sizeof(struct time));

    return 0;
}
