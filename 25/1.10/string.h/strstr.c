//strstr and strcasestr
//char* strstr(const char *s1, const char *s2);
//char* strcasestr(const char *s1, const char *s2);//忽略大小写

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[] = "Welecome to this word!";
    char s2[] = "to";
    char *q = strstr(s1, s2);
    char *p = (char*)malloc(strlen(q)+1);
    char c = *(q+2);
    
    *(q+2) = '\0';
    strcpy(p, q);
    *(q+2) = c;
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s", p);
    free(p);
    
    return 0;
}