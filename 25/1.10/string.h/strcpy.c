//strcpy
//char *strcpy(char *restrict dst, const char *restrict src)
//copy the string from src to dst
//restrict means dst and restrict don't corver each other
//return dst
//为了链起代码来

//copy a string we normally use the below code:
//char *dst = (char*)malloc(strlen(src)+1);// plus 1 is for '\0'
//strcpy(dst, src);
//don't for get to free the malloc function

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* mycpy(char *restrict dst, const char *restrict src);

int main()
{
    char s1[] = "Hello World";
    char *s2 = (char*)malloc(strlen(s1)+1);
    char *s3 = (char*)malloc(strlen(s1)+1);
    
    printf("s3: %s\n", mycpy(s3, s1));
    printf("s2: %s\n", strcpy(s2, s1));
    free(s2);
    free(s3);

    return 0;
}

char* mycpy(char *restrict dst, const char *restrict src)
{
    int cnt = 0;
    
    do
    {
        dst[cnt] = src[cnt];
        cnt++;
    } while (src[cnt] != '\0');

    return dst;
}