//想要输入一个完整的structure
//函数返回时可以选择直接赋给原结构

#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct date getstruct(void);
void output(struct date d);

int main()
{
    struct date today = {0};
    today = getstruct();
    output(today);

    return 0;
}

struct date getstruct(void)
{
    struct date input;
    printf("please type in the year:");
    scanf("%i", &input.year);
    printf("please type in the month:");
    scanf("%i", &input.month);
    printf("please type in the day:");
    scanf("%i", &input.day);

    return input;
}

void output(struct date d)
{
    printf("Today is %i-%i-%i\n", d.year, d.month, d.day);
}