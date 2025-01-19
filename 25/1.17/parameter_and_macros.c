//宏可以带参数（parameter）
//for example:
//#define cube(x) ((x)*(x)*(x))
//后续若你输入如cube（5）
//那么会将5替换x，变成((5)*(5)*(5))

#include <stdio.h>

#define cube(x) ((x)*(x)*(x))

int main()
{
    int i = 0;

    printf("please type in the lenth of a cube:");
    scanf("%d", &i);
    printf("the size of the cube is %d", cube(i));

    return 0;
}

//带参数的宏原则
//一切都要有括号
//（1）整个值部分要括号
//（2）参数出现的每个地方要括号

//? 和 : 通常组合成三元运算符（也称为条件运算符），用于简化条件判断
//condition ? expression1 : expression2
//true -> then value is expression1
//false -> then value is expression2
//#define MIN(a,b) a<b?a:b 
//简单的最小值求解