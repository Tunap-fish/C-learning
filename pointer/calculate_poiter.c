#include <stdio.h>

int main()
{
    char ac[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char *p = ac;
    printf("p = %p\n", p);
    printf("p+1 = %p\n", p+1);
    printf("*p = %d\n", *p);
    printf("*(p+1) = %d\n", *(p+1));
    printf("(p+6) - p = %d\n", (p+6) - p);
    //sizeof(char) = 1
    //therefore, p+1 = p+1*sizeof(char) = p+1
    //*(p+6) - *p = 6

    int ai[10] = {19, 234, 154, 3534, 423, 645, 45342, 2543, 563, 3495};
    int *q = ai;
    printf("q = %p\n", q);
    printf("q+1 = %p\n", q+1);
    printf("*q = %d\n", *q);
    printf("*(q+1) = %d\n", *(q+1));
    printf("(q+6) - q = %d\n", (q+6) - q);
    //sizeof(int) = 4
    //在原来地址的基础上加上一个sizeof(int)的值
    //才是下一个元素的地址
    //*(q+6) - *q = 6
    //a[6] = *q+6, a[0] = *q
    //q = 0x7fffbf7f3b40, q+6 = 0x7fffbf7f3b58
    //地址差24 = sizeof(int) * 6

    printf("*(ai+2) = %d\n", *(ai+2));
    return 0;
}

//指针的计算一个元素一个元素的移动
//指针的计算是根据指针的类型来计算的
//如果是int类型的指针，那么指针的计算是以4个字节为单位的
//如果是char类型的指针，那么指针的计算是以1个字节为单位的
//double、float、long等类型的指针，指针的计算也是以相应的字节数为单位的
//指针之间加减结果是一个整数，这个整数是指针之间相差的元素个数
//for example: p1 - p2 = 3, p1和p2之间相差3个元素
//地址差等于 sizeof(类型) * 元素个数

//pointer has its own type 
//differnt types of pointers cannot be assigned to each other (赋值)
//int *p;
//char *q;
//p = q; //error

//*p++ is very useful
//++ has higher priority than *

//pointers can be compared
//<, >, <=, >=, ==, !=

//零地址是一个特殊的地址，表示空指针
//是一个无效的地址，不指向任何有效的内存单元
//用NULL表示零地址