//程序参数
//main函数的参数表其实是有东西的
//int main(int argc, char const *argv[])
//一个是整数，告诉我们后面那个数组到底有多少个字符串
//一个是数组
//argc  ----  argument count
//argv  ----  argument value
//接受在命令行的参数
//假设程序编译为 my_program，在命令行中运行：
//  ./my_program arg1 arg2 arg3
//便会将./my_program 作为第一个字符串
//arg1 是第二个，以此类推

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Number of the argument: %d\n", argc);
    for(int i = 0; i < argc; i++)
    {
        printf("%d: %s\n", i, argv[i]);
    }

    return 0;
}
