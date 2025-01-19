//macro（宏）
//Preprocessor Directives
//#开头的是预处理指令
//在真正开始编译之前
//会先进行预处理
//#define 可以定义一个宏
//#define <name> <value>

//比如#difine double PI = 3.1415926
//在预处理时便会直接进行文本替换
//将所有PI替换成3.1415926
//编译器不会管 "" 里的东西

//一个宏里有其他宏的名字
//也会被其他宏所直接替换

//如果一个宏的名字超过一行最后一行之前的行末要加 \
//宏的值后面出现的注释不会被当作宏的值的一部分

#include <stdio.h>

//const int PI = 3.1415926;
#define PI 3.1415926
#define Format "%f\n"
#define PI2 2*PI // 2*PI
#define PRT printf(Format, PI);\
            printf(Format, PI2)

int main()
{
    printf("%f\n", 3*PI*2.0);
    //printf("%f\n", 3*3.1415926*2.0);
    PRT;

    return 0;
}