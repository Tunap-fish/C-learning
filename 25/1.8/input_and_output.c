#include <stdio.h>

int main()
{
    char word[8];
    char word2[8];

    scanf("%s", word);
    scanf("%s", word2);
    printf("%s____%s____\n", word, word2);

    char word3[8];
    scanf("%7s", word3);
    printf("%s", word3);
    //the number between % and s tolds the founction only to write in 7 charaters
    //the rest will be the next string or be abandoned

    return 0;
}

//scanf 读入一个单词（直到tab，空格，回车为止）
//但是scanf是不知道读入的长度

//char buffer[100] = ""
//这是一个有效的空的字符串
//buffer[0] == '/0'
//但是 buffer[] = "" 没有任何意义
//长度只有1

