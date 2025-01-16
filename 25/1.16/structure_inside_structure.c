//结构数组
//for example:
//struct date dates[100];
//struct date date[] = {{13, 24, 654}, {43, 23, 534}};

//结构中的结构
//如果之前已经定义了 date 和 time
//我们可以把它放进另一个结构
//struct timeAnddate{
//struct date sdate;
//struct time stime;
//};

#include <stdio.h>

struct point{
    int x;
    int y;
};

struct rectangle{
    struct point p1;
    struct point p2;
};

int main()
{
    struct rectangle two[] = {{{1,2}, {6,8}}, {{4,7}, {12,64}}};
    struct rectangle *p = &two[1];

    printf("%i-%i\n", two[0].p2.x, two[0].p1.x);
    printf("%i-%i\n", p->p1.x, p->p2.y);

    return 0;
}