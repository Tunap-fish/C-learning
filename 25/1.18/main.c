//如何同时编译多个源代码文件
//修改tasks.json
//在main函数文件里要加上所有函数的头文件
//因为是自创的头文件，所以要用 "" , <> 只能系统目录里的头文件使用
//"${cwd}/*.c"
//or just add "<file>.c"
//在 Visual Studio Code 的配置文件（如 tasks.json 或 launch.json）中，$ 用于引用预定义变量
//${workspaceFolder}：当前工作区根目录
//${file}：当前打开的文件路径
//${cwd}：当前工作目录

//关于路径是使用 / 还是 \ 
//Windows：
//默认使用 \，但需要转义为 \\。
//支持 /，推荐使用 / 以提高跨平台兼容性
//Unix/Linux/macOS：
//使用 /

#include <stdio.h>
#include "max.h"

int main()
{
    int a = 0;
    int b = 0;

    printf("type in a:");
    scanf("%d", &a);
    printf("type in b:");
    scanf("%d", &b);
    printf("the bigger one is %d", max(a,b));

    return 0;
}