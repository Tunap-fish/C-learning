//Data_type : pointer
//int i;
//int *p = &i; p is a pointer to an integer

//int *p, q; p is a pointer to an integer, q is an integer
//int* p, q; p is a pointer to an integer, q is an integer
//不管 * 远离还是靠近p，都是只表明p是一个指针，而不是q
//不会加给int，而是加给p
//这里的*是一个修饰符，而不是解引用操作符
//修饰p，表明p是一个指针

//指针是一个变量，用于存储另一个变量的地址
//指针是p，而不是*P
//* 是解引用操作符，用于 “访问” 指针p所指向的变量
//比如 int i = 10;
//int *p = &i;
//int j = *p;
//j = 10

//void* 是一种特殊的指针类型，可以指向任何类型的数据
//但需要强制类型转换才能使用

//在赋予指针变量一个地址之前，不要解引用指针
//指的是不要去访问一个未初始化的指针
//可能会出错


#include <stdio.h>

void f(int *p);
void g(int k);

int main()
{
    int i = 10;
    printf("&i = %p\n", &i);
    f(&i);
    g(i);

    return 0;
}

void f(int *p)
{
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
    *p = 20;//通过访问地址，修改变量的值，做到不同的与里面同样可以修改相同变量的值
}

void g(int k)
{
    printf("k = %d\n", k);
}
