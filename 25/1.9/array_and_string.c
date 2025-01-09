//char **a;// 指的是a是一个指针，指向另一个指针，那个指针指向一个字符（串）

//char *a[] = {}
//这便是字符串数组

#include <stdio.h>

int main()
{
    char *month[] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int i = 1;
    int m = 1;

    while(m == 1)
    {        
        printf("please input the number of the month: ");
        scanf("%d", &i);
        if(i > 0 && i <= 12)
        {
            printf("Here!\nWe are now in %s\n", month[i-1]);
            break;
        } else {
            printf("please input a valid number\n");
        }
    }

    return 0;
}

