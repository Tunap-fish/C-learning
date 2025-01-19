//全局变量（global variables）//本地变量（local variables)
//本地变量只能在本函数中使用
//生存期和作用域都是在函数内部
//全局变量则可以在所有函数中使用
//有全局的生存期和作用域

//定义在函数外面

#include <stdio.h>

void f(void);

int constant = 12;

int main(int argc, const char *argv[])
{
    printf("constant in %s is %i\n", __func__, constant);//__func__是function name的字符串
    f();
    printf("agn constant in %s is %i\n", __func__, constant);

    return 0;
}

void f(void)
{
    printf("constant in %s is %i\n", __func__, constant);
    constant += 4;
    printf("agn constant in %s is %i\n", __func__, constant);
}

//全局变量的初始化
//没有得到初始化的全局变量会得到0值
//指针得到NULL值
//只能用编译时刻已知的值来初始化
//其初始化发生在main函数之前
//尽量不要使用另一个全局变量来初始化全局变量

//const int gall = 12;
//int g2 = gall;
//能成功
//去掉const不一定可以，看编译器
//全局变量会被同名本地变量覆盖