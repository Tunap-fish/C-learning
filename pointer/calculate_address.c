//sizeof(struct sockaddr_in)
//给出某个类型或变量在内存中所占据的字节数

#include <stdio.h>

int main()
{
    int a;

    a = 6;
    printf("sizeof(int)= %d\n", sizeof(int));
    printf("sizeof(a) = %d\n", sizeof(a));

    return 0;
}

//scanf("%d", &a);
//这里 & 符号是取地址符号，表示将变量 a 的地址传递给 scanf 函数，
//这样 scanf 函数就可以通过这个地址找到变量 a，然后将输入的值存放到变量 a 的内存空间中
//its operand must be (only) a variable, not a constant or an expression

//如 printf("0x%x\n", &a);
//输出的就是变量 a 的地址，而不是变量 a 的值
//以16进制的形式输出变量 a 的地址
//如果想知道地址，正确写法应是
//printf("%p\n", &a);
//%p 是以指针的形式输出，输出的是变量 a 的地址

//变量分配的内存地址是连续的
//本地变量分配在堆栈 （stack) 上，堆栈是向下增长的 （后进先出 - LIFO, Last In First Out）
//但是数组分配在堆上，堆是向上增长的
//例如，array内部是向上增长的，而array外部是向下增长的


