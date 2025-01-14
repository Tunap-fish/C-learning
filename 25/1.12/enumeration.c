//枚举是用户定义的数据类型
//以关键字enum和如下语法声明
//enum 枚举类型名称 {name0, name1,... nameN};
//通常，我们只是要大括号里的名字
//他们就是常量符号
//实际上的类型是int
//值依此从0到n
//就不用一点一点写const int
//最后一位相当于自动计数

#include <stdio.h>
#include <string.h>

enum color {yellow, green, red, purple, blue, total_number};

int main()
{
    char in[10];
    char *co[] = {"yellow", "green", "red", "purple", "blue"};
    char *YN[] = {"yes", "no"};
    char choise[4];
    int x;
    int final_prize;
    int pieces;
    int prize[] = {23, 15, 36, 27, 19};

    printf("Here are %d colors, which one would you like to bye?\n", total_number);
    printf("yellow(23$), green(15$), red(36$), purple(27$) or blue(19$)\n");
    printf("Now please input you wished color: \n\t");
    
    cmp:
    scanf("%s", in);
    if (strcmp(in, co[0]) == 0)
    {
        x = yellow;
    } else if (strcmp(in, co[1]) == 0)
    {
        x = green;
    } else if (strcmp(in, co[2]) == 0)
    {
        x = red;
    } else if (strcmp(in, co[3]) == 0)
    {
        x = purple;
    } else if (strcmp(in, co[4]) == 0)
    {
        x = blue;
    } else if (strcmp(in, co[4]) == 0)
    {
        printf("yellow(23$), green(15$), red(36$), purple(27$) or blue(19$)\n");
        printf("now try again\n\t");
        goto cmp;
    } else
    {
        printf("please type in the correct color name above(if you want to see the name type in color)\n");
        printf("Here to type in:\n\t");
        goto cmp;
    }

    printf("how many pieces would you like to buy? (input decimal number)\n\t");
    while( 1 )
    {
        scanf("%d", &pieces);
        if (pieces > 0)
        {
            break;
        } else if (pieces = 0)
        {
            printf("would you like to cancel this choise of color? (type in yes or no)\n");
            scanf("%s", choise);
            if (strcmp(YN[0], choise) == 0)
            {
                printf("your choise has been canel seccessfully\n");
                printf("now you can have a new choice\n");
                printf("Here to type:\n\t");
                goto cmp;
            } else if (strcmp(YN[0], choise) == 0)
            {
                printf("You can retype the pieces you want:\n\t");
                goto cmp;
            } 

        } else if (pieces < 0)
        {
            printf("please input a non-negative decimal\n");
            printf("again:\n\t");
            goto cmp;
        }
    }
    final_prize += pieces * prize[x]; 
    pieces = 0;
    printf("Now you need to pay %d$", final_prize);
    printf("would you like to buy another one?");
    scanf("%s", choise);
    if (strcmp(YN[0], choise) == 0)
    {
        printf("Buy New color!\n");
        printf("what would you like to buy?\n\t");
        goto cmp;
    } else if (strcmp(YN[1], choise) == 0)
    {
        printf("You have finished your shopping!\n");
        printf("you need to pay %d$\n", final_prize);
    }

    return 0;

}
