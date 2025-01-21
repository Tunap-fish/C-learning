//位段
//把一个int若干位组合成struct
//struct {
//unsigned int leading : 3;
//unsigned int second : 1;
//unsinged int third : 1;
//int trailing : 11;
//};
// : 后面是所占是本成员占据多少比特

#include <stdio.h>

struct U0{
    unsigned int last : 4;
    unsigned int first : 4;
    unsigned int second : 4;
    int leading : 20;
};

typedef struct U0 new_int;

void printBin(int *p);

int main()
{
    new_int uu;
    new_int ui;

    uu.last = 2;
    uu.first = 3;
    uu.second = 4;
    uu.leading = 0xF0000;
    ui.last = uu.last + 1;
    ui.first = uu.first + 1;
    ui.second = uu.second + 1;
    ui.leading = uu.leading + 1;
    printBin((int*)&uu);
    printBin((int*)&ui);
}

void printBin(int *p)
{
    unsigned int cnt = 1u<<31;

    for ( ; cnt; cnt >>= 1)
    {
        printf("%d", *p&cnt?1:0);
    }
    printf("\n");
}