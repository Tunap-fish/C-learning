// < 和 > 在终端操作时
//可以把output写入某个文件
//或把某个文件里的内容作为输入

//如.\test > output.txt  ------ write in
//.\test < input.txt ----- input data

//打开文件的标准代码
//FILE* fp = fopen("<file>","r");//fopen是打开文件，r 是读，如果没有打开文件fopen返回值是NULL，因此需要判断
//if (fp){
//fscanf(fp,...);
//fclose(fp);
//} else {
//...
//}

#include <stdio.h>

int main()
{
    FILE* fp = fopen("result.txt","r");
    int num;
    if (fp) {
        fscanf(fp, "%d", &num);
        printf("%d\n", num);
        fclose(fp);
    } else {
        printf("The file was failed to open!\n");
    }

    return 0;
}

//fopen有两个参数
//第一个是文件名
//第二个参数可以是
//r ：打开只读
//r+ ：打开读写，从文件头开始
//w ：打开只写，若没有这个文件则新建，若有则清空再写
//w+ ：打开读写，若没有这个文件则新建，若有则清空再写
//a ：打开追加，没有这个文件则新建，若有则从结尾处开始写
//可以在这些参数后面加x
//代表只新建，若已有则不打开