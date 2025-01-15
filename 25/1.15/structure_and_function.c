//结构作为函数参数
//整个结构作为参数转入函数
//函数也可以返还一个结构

#include <stdio.h>
#include <stdbool.h>

struct date{
    int day;
    int month;
    int year;
};

bool leap(struct date to);

int number_day(struct date now);

int main(int argc, const char *argv[])
{
    struct date tomorrow;
    struct date today;

    printf("please follow the instruction!\n");
    printf("type in the year:\n");
    scanf("%i", &today.year);
    printf("type in the month:\n");
    scanf("%i", &today.month);
    printf("type in the day:\n");
    scanf("%i", &today.day);
    if (today.day != number_day(today))
    {
        tomorrow.year = today.year;
        tomorrow.month = today.month;
        tomorrow.day = today.day;
    } else if (today.month == 12)
    {
        tomorrow.year = today.year + 1;
        tomorrow.month = 1;
        tomorrow.day = 1;
    } else
    {
        tomorrow.year = today.year;
        tomorrow.month = today.month + 1;
        tomorrow.day = 1;
    }
    printf("\tHere! Tomorrow is\n");
    printf("----------------------------------------\n");
    printf("\n");
    printf("\t %i -- %i -- %i\n", tomorrow.day, tomorrow.month, tomorrow.year);
    printf("\n");
    printf("----------------------------------------\n");
    printf("\t      End!");

    return 0;
}

bool leap(struct date to)
{
    bool if_leap = false;

    if (to.year % 4 == 0 && to.year % 100 != 0 || to.year % 4 == 0)
    {
        if_leap = true;
    }

    return if_leap;
}

int number_day(struct date now)
{
    int day;
    const int last_day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (leap(now) && now.month == 2) 
    {
        day = last_day[now.month-1] + 1;
    } else {
        day = last_day[now.month-1];
    }

    return day;
}