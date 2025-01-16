//自定义数据类型
//typedef可以声明一个已有数据类型的新名字
//最后一个单词才是名字
//声明在开始
//typedef struct{
//int x;
//int y;
//} point; //一个无名结构声明为point
//typedef int length;//length now is the same as int
//typedef char* strings[10];//strings是10个字符串的数组的类型

#include <stdio.h>

typedef char* strings[10];

int main()
{
    strings x = {
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten"
    }; 
    int i = 0;

    while(i < 10)
    {
        printf("%s\n", x[i]);
        i++;
    }

    return 0;
}