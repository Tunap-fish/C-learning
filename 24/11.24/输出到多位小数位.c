//如果想要输出到16位或其他位小数表示范围内可以选择改变printf内的数据输出
//例如，printf（“%.16f”, x)表示输出到16位小数
#include <stdio.h>

int main()
{
    printf("%.3f", 0.00450000000000000009);

    return 0;
}