//静态本地变量（Static Local Variable）
//在本地变量定义时加上static修饰，我们叫他静态本地变量
//当函数结束时，这个静态本地变量依旧存在并保持其值
//其初始化只有在第一次进入本地变量时做
//以后进入时只会保持上一次离开时的值

//静态本地变量是特殊的全局变量
//具有全局的生存期，函数局部的作用域
//因此静态本地变量和全局变量存放在一起（静态存储区）
//本地变量通常存储在栈上

#include <stdio.h>

int y = 10;

void f(void);

int main()
{
    int i = 0;

    //while(i < 3)
    //{
        f();
        //i++;
    //}

    return 0;
}

void f(void)
{   
    int z = 3;
    static int cnt = 1;
    static int x = 12;
    
    printf("address for y is 0x%p\n", &y);
    printf("address for x is 0x%p\n", &x);
    printf("address for z is 0x%p\n", &z);
    printf("%d: x = %d\n", cnt, x);
    x += 2;
    printf("agn %d: x = %d\n", cnt, x);
    cnt++;
}