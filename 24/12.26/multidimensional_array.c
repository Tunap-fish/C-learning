//array can be multidimensional
// which means it can have many index（索引）in one array
// for example, int a[3][4];
// 3 rows and 4 columns
// 这是二维数组
// 二维数组也需要
// 初始化的时候，一定要给出列数
// 行数可以帮你计算
// Data_type array_name[row][column] = {{value1, value2, value3, ...}, {value1, value2, value3, ...}, ...};
// 每一个{}里面的叫做一个一维数组，代表一行，且用逗号隔开
#include <stdio.h>

int main()
{
    int a[3][3] = {{2,2,2},{2,2,2},{2,2,2}};
    int O[2] = {0};
    int X[2] = {0};
    int i, j;
    int cnt = 9;

    for (cnt = 9; cnt > 0; cnt--)
    {   
        printf("Please input the position\n");
        scanf("%d %d", &i, &j);
        printf("please input O or X (O is 0,X is 1)\n");
        scanf("%d", &a[i][j]);

        printf("-----------------\n");
        for(int x = 0; x < 3; x++)
        {
            for (int y = 0; y < 3; y++)
            {
                if (a[x][y] == 0)
                {
                    printf("O ");
                } else if (a[x][y] == 1)
                {
                    printf("X ");
                } else {
                    printf("[] ");
                }
            }
            printf("\n");
        }
        printf("-----------------\n");
        printf("\n");

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (a[i][j] == 0)
                {
                    O[0]++;
                } else if (a[i][j] == 1){
                    X[0]++;
                }
                if (a[j][i] == 0)
                {
                    O[1]++;
                } else if (a[j][i] == 1){
                    X[1]++;
                }
            }
            if (O[0] == 3 || O[1] == 3)
            {
                printf("O win\n");
                goto end;
            } 
            else if (X[0] == 3 || X[1] == 3) 
            {
                printf("X win\n");
                goto end;
            }
            O[0] = 0;
            X[0] = 0;
            O[1] = 0;
            X[1] = 0;
        }

        for (i = 0; i < 3; i++)
        {

            if (a[i][i] == 0)
            {
                O[0]++;
            } else if (a[i][i] == 1){
                X[0]++;
            }
            if (a[i][2-i] == 0)
            {
                O[1]++;
            } else if (a[i][2-i] == 1){
                X[1]++;
            }
        }
        if (O[0] == 3 || O[1] == 3)
        {
            printf("O win\n");
            goto end;
        } else if (X[0] == 3 || X[1] == 3)
        {
            printf("X win\n");
            goto end;
        }
        O[0] = 0;
        X[0] = 0;
        O[1] = 0;
        X[1] = 0;
    }
            
    printf("No one win\n");
    end:
    return 0;

}