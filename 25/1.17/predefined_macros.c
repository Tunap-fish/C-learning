//__DATE__	当前源文件的编译日期，格式为 "Mmm dd yyyy"（例如 "Oct 15 2023")
//__TIME__	当前源文件的编译时间，格式为 "hh:mm:ss"（例如 "14:30:45")
//__FILE__	当前源文件的文件名（包括路径)
//__LINE__	当前代码行的行号（整数）
//__func__	当前函数的函数名（C99 标准引入）
//__STDC__	如果编译器符合 ANSI C 标准，则定义为 1，否则未定义
//__STDC_VERSION__	表示 C 标准的版本号（例如 199901L 表示 C99）

#include <stdio.h>

int main() {
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("File: %s\n", __FILE__);
    printf("Line: %d\n", __LINE__);
    printf("Function: %s\n", __func__);
    printf("STDC Version: %ld\n", __STDC_VERSION__);
    
    return 0;
}