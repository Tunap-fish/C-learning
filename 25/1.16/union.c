//union
//联合
//共用一个储存空间
//同一时间只有一个成员有效
//union的大小是最大的成员
//初始化的时候
//初始化第一个成员

#include <stdio.h>

typedef union{
    int i;
    char ch[sizeof(int)];
} CHI;

int main()
{
    CHI chi;
    int cnt;

    chi.i = 1234;
    for(cnt = 0; cnt < 4; cnt++)
    {
        printf("%02hhX", chi.ch[cnt]);
    }

    return 0;
}//这个程序可以得到一个int，float等的内部的字节

//低位在前
//小端像x86便是低位放在低地址，高位放在高地址