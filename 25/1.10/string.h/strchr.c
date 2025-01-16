//strchr and strrchr
//char * strchr(const char *s, int c);//start from left
//char * strrchr(const char *s, int c);//start from right
//int c represent the character you wish to find
//output NULL means didn't find the character

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char word[] = "Hello  World";
    char *p = strchr(word, 'W');
    char *q = (char*)malloc(strlen(p)+1);
    
    strcpy(q, p);
    printf("%s\n", word);
    printf("%s\n", p);//if you want to find the second character you can use
    printf("%s\n", strchr(p, 'l'));
    printf("%s\n", q);
    free(q);
    
    return 0;
}