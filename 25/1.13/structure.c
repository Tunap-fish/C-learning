//声明结构类型
//放在main里面只能被main函数使用
//一般声名在外部
//case1:
//struct point{
//int x;
//float y;
//...
//};
//struct point p1, p2;

//case2:
//struct {
//int 2;
//int y;
//} p1, p2;// p1 和 p2 都是一种无名结构，里面含有x和y两个变量

//case3:
//struct point{
//int x;
//int y;
//} p1, p2;
//及声明一个结构叫point，p1和p2里含有x和y两个变量


#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

int main()
{
    struct date today;
    struct date yesterday = {14, 1, 2025};//按顺序自动分配
    struct date tomorrow = {.month = 1, .year = 2025, .day = 16};//未赋值赋为0
    struct date now;
    struct date *pdate = &today;

    today.day = 15;
    today.month = 1;
    today.year = 2025; 
    now = today;
    now.year = 2024;
    printf("yesterday: %i-%i-%i\n", yesterday.year, yesterday.month, yesterday.day);
    printf("today: %i-%i-%i\n", today.year, today.month, today.day);
    printf("tommorow: %i-%i-%i\n", tomorrow.year, tomorrow.month, tomorrow.day);
    printf("now: %i-%i-%i\n", now.year, now.month, now.day);
    printf("the address of today is %p\n", pdate);

    return 0;
}

//初始化
//结构成员
//但是结构中用 . 和 名字 来访问其成员
// . 的左边一定是结构变量

//对于整个结构
//可以赋值，取地址，也可以传递给函数参数
//例如：
//p1 = (struct point){5, 10};//强制变量转换
//相当于 p1.x = 5; p1.y = 10;
//p2 = p1 相当于把每一个 p1 都赋给 p2

//结构变量的名字不能当作地址来用
//因此需要取地址符