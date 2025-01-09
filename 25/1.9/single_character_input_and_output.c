//putchar
//int putchar(int c)
//向标准输出（控制台或者终端）写一个字符
//返回写了几个字符，EOF（End of file）（-1）表示写失败

//getchar
//int getchar(void)
//标准输入（键盘）读入一个字符
//返回类型是int是为了返回EOF（-1）
//Windows ---- Ctrl - D

#include <stdio.h>

int main()
{
    int ch;

    while((ch = getchar()) != -1)
    {
        putchar(ch);
    }
    printf("EOF");

    return 0;
}

//在键盘和显示器之间有一个额外的程序shell，
//shell提供的是 行编辑 的功能
//是一个缓冲区
//用键盘输入
//储存在shell中直到<Enter>
//才会传入你的程序
//即使到了shell的结尾，它还是会等你输入
//如果按下ctrl - z, shell就会填入一个代表着EOF的标志(still wait for <Enter>)
//你的程序再读的时候
//就会读到-1的结果

//Ctrl - c directly shut down your program

//用户的输入是去填shell
