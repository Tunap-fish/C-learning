//在 printf 和 scanf 中 输入输出字符使用 %c 来表示字符类型
//同时，我们一般使用 ‘ ’ 来表示字符
#include <stdio.h>

int main()
{
    char c;
    char d;
    c = '1';//这是字符，而不是数字1
    printf("%c\n", c);
    d = 49;//这是数字49（int），而不是字符
    printf("%d\n", d);
    printf("%c\n", d);//这是字符c作为整数，表示
    //字符与数字（其实是二进制）有对应关系 ----- ASCII码
    return 0;
}