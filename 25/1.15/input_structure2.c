//a better way to input structure
// we use pointer when return form the function
//用 -> 来表示指针所指结构变量中的成员
//for example:
//p->x = 12;
//the same as (*p).x = 12;

#include <stdio.h>

struct point{
    int x;
    int y;
};

struct point* getstruct(struct point *p);
void output(struct point d);
void print(struct point *q);

int main(int argc, const char *argv[])
{
    struct point p1;

    getstruct(&p1);
    output(p1);
    print(&p1);
    print(getstruct(&p1));

    return 0;
}

struct point* getstruct(struct point *p) 
{
    printf("please type in x: ");
    scanf("%i", &p->x);
    printf("please type in y: ");
    scanf("%i", &p->y);

    return p;
}

void output(struct point d)
{
    printf("x = %i, y = %i\n", d.x, d.y);
}

void print(struct point *q)
{
    printf("x = %i, y = %i\n", q->x, q->y);
}