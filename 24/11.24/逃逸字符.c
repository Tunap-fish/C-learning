//逃逸字符是用来表示无法直接印出来的控制字符和特殊字符
//一般是 反斜杠 \ 加 所需字符组成

#include <stdio.h>

int main()
{
    printf("please type in the result(for example \"120\"):");//双引号内一般不可以直接出现双引号
    printf("123\b\n456\n");
    printf("123\b\nA456\n");
    printf("123\t456\n");
    printf("12\t456\n");
    
    return 0;

    
}

//逃逸字符：
//  \b - 回退一格，具体看实例
//  \t - 到下一个表格位
//  \r - 回车 一般会自动将 \n 使用为 换行加回车
//  \n - 换行
//  \",\' - 单双引号
//  \\ - 反斜杠本身