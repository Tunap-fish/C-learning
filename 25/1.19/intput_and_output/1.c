//%[flags][width][.prec][hIL]type

//---------------prinf-----------------

//[flags]
// - ：左对齐
// + ：强制输出加号
// 0 ：在前面填充0

//[width] or [.prec]
//number : 占据多少字符位置
//* ：下一个参数是字符数
//.number :保留多少位小数
//.* : 下一个参数是保留多少位小数

//[hIL]修饰符
//hh :单个字符
//h ：short
//l ：long
//ll :longlong
//L :long double

//type --- n
//向某个地址输入/写入前面输出了几位字符


//--------------scanf------------------

//%[flag]type

//[flag]
//* ：跳过
//nuber :最大字符数
//hh
//h
//l
//ll
//L

//type ---- i
//整数，可能为十六进制，也可能为八进制

//type ---- [...]
//所允许的字符
//例如 %[^,]
//指在逗号前的所有字符

//scanf 和 printf 的返回值
//scanf返回的是读入的variables数目
//printf返回的是输出的字符数
