//strcmp
//used to compare
//int strcmp(char const *a, char const *b)
//return data_type is int
//0:a == b
//positve:a > b
//negative:a < b
//it will return the result the string in a minus(ASCII code) the string in b
//different compiler has different output
//for Vscode, it only will result in 1,0,-1

#include <stdio.h>
#include <string.h>

int mycmp(char const *s1, char const *s2);

int main()
{
    char word1[] = "abcd";
    char word2[] = "aaaa";

    printf("mycmp: %d\n", mycmp(word1, word2));
    printf("comparision: %d\n", strcmp(word1, word2));
    printf("directly compare: %d\n", 'b'+'c'+'d'-'a'-'a'-'a');

    return 0;
}

int mycmp(char const *s1, char const *s2)
{
    int cnt1 = 0;
    int cnt2 = 0;
    int result = 0;

    while(s1[cnt1] != '\0' || s2[cnt2] != '\0')
    {
        if(s1[cnt1] == '\0')
        {
            result = result - s2[cnt2];
            cnt2++;
        } else if (s2[cnt2] == '\0') {
            result = result + s1[cnt1];
            cnt1++;
        } else {
            result += s1[cnt1] - s2[cnt2];
            cnt1++;
            cnt2++;
        }
    }

    return result;
}