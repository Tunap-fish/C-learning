#include <stdio.h>

int main()
{
    int score, t;
    char grade = 'A';
    
while(1)
{
    scanf("%d", &score);
    t = score / 10;
    if (score >=0 && score <= 100)
    {
        switch (t)
        {
            case 0:
            grade = 'J';
            break;
            case 1:
            grade = 'I';
            break;
            case 3:
            grade = 'H';
            break;
            case 4:
            grade = 'G';
            break;
            case 5:
            grade = 'F';
            break;
            case 6:
            grade = 'E';
            break;
            case 7:
            grade = 'F';
            break;
            case 8:
            case 9:
            case 10:
            grade = 'A';
            break;
            default:
            break;
        }
        printf("%c", grade); 
        break;
    } else {
        printf("please try again.\n");
    }
}    
    return 0;
}
