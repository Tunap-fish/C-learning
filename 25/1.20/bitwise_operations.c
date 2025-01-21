// 按位运算
//运算符：
// & : 按位的与
// | ：按位的或
// ~ ：按位取反
// ^ ：按位异或
// << ：左移
// >> ：右移
//以二进制来运算
//每一位分开运算
//注意>>=, <<=等式是成立的
//一定要在运算后记得在赋值
//按位运算不会自动复制

// 逻辑运算
//把所有非0的数字看作1
//再做按位运算

//移位运算
//<<左移补零
//>>右移对于unsigned补0
//对于signed补1
//不要用复数

#include <stdio.h>

int main()
{
    int number;
    unsigned int mask = 1<<31;

    scanf("%d", &number);
    for ( ; mask > 0; mask >>= 1)
    {
        printf("%d", number&mask?1:0);//number & mask?1:0的逻辑是只要number & mask大于零便会返回1
    }
    printf("\n");

    return 0;
}