//strlen
//told us the length of a string
//size-t strlen(const char *s);
    //返回值类型是size-t 这是标准库中定义的类型，通常通过 typedef 定义为 unsigned int 或 unsigned long 等，
    //具体取决于平台和编译器。它用于表示内存中对象的大小或数组的索引，确保能够处理系统中可能的最大对象。----- 来自Deepseek

#include <stdio.h>
#include <string.h>

int mylen(const char *a);

int main()
{
    char word[] = "Hello World!";

    printf("mylen: %d\n", mylen(word));
    printf("length: %zu\n", strlen(word));
    printf("sieof: %lu\n", sizeof(word));

    return 0; 
}

int mylen(const char *a)
{
    int cnt = 0;
    
    while(a[cnt] != '\0')
    {
        cnt++;
    }
    
    return cnt;
}
                                                                                    