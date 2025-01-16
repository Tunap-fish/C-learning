//全局变量
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
    printf("constant in %s is %i\n", __func__, constant);
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