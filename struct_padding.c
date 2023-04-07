#include <stdio.h>
struct time
{
    unsigned int seconds;
    unsigned int minutes;
    unsigned int hours;
    unsigned int day;
    unsigned int month;
    unsigned int year;
} t;
int main()
{
    printf("Enter Hours ");
    scanf("%u", &t.hours);
    printf("Enter Minutes ");
    scanf("%u", &t.minutes);
    printf("Enter Seconds ");
    scanf("%u", &t.seconds);
    printf("Enter Day ");
    scanf("%u", &t.day);
    printf("Enter Month ");
    scanf("%u", &t.month);
    printf("Enter Year ");
    scanf("%u", &t.year);

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