//string(字符串)
//char word[] = {'H', 'e', 'l','l', 'o', 'w', '\0'}
//'\0'是必须的
//若没有 \0 ，只是字符数组，无法参与字符串的运算
//0 and '\0' is the same
//presenting that the string is over
//the length of the string won't include the 0
//string.h 

//normally, we use pointer or array to calculate the string
//这意味着printf的时候，需要的是第一个字符的地址
//不需要把地址解引用（*）
//%s

//“Hello"
//"..." is called string constant

//char word[] = "Hello"
//char line[10] = "Hello"
//char *str = "..."
//here represent a string
//编译器会自动帮你在结尾生成 \0

//如果你写的是
//char *s = "Hello, World!"
//字符串被储存在一个叫做代码段的地方
//并非本地变量
//且这个地方只读
//s只是一个指针，指向代码段的地址

//如果想修改字符串
//使用数组
//char s[] = "Hello World"
//先在代码段创建一个字符串
//再把字符串拷贝到数组
//此时 s 这个数组在本地变量那里

#include <stdio.h>

int main()
{
    char *s1 = "Hello World";
    char s2[] = "Hello World";
    
    s2[0] = 'B';
    s2[1] = 'C';

    printf("Here! s2[0] = %c\ns2[1] = %c", s2[0], s2[1]);

    return 0;
}

//如果我们要构造一个字符串
//用数组
//如果我们要处理一个字符串
//用指针

//在使用的时候，把字符串当作数组和指针使用

//%c 是字符类型数据
//%s 是字符串类型数据
