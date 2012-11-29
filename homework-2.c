1
#include <stdio.h>

int a = 100;
int b = 101;
int c = 102;

int main(void)
{

    printf("a at %p\n", &a);
    printf("b at %p\n", &b);
    printf("c at %p\n", &c);

    return 0;
}  

 input: 無
 output:

a at 0x804a014
b at 0x804a018
c at 0x804a01c

2
#include <stdio.h>

    int main(void)
{
    int a = 100;
    int b = 101;
    int c = 102;

    printf("a at %p\n", &a);
    printf("b at %p\n", &b);
    printf("c at %p\n", &c);

    return 0;
}  

input: 無
output:

a at 0xbfdd2c04
b at 0xbfdd2c00
c at 0xbfdd2bfc

/* 第一题回答：全局变量跟局部变量在系统编译时在内存中分别放在不同的存储单元。*/

3
#include "stdio.h"
int global;
void main()
{
  printf("global=%p &global+1=%p\n",(int)&global,(int)(&global+1));
}

global=004237A0 &global+1=004237A4

//第二题答案 int 类型全局变量地址加1的值相当于在原来地址的基础上加了4

4
#include "stdio.h"
int    global_1;
char   global_2;
short  global_3;
float  global_4;
void main()
{
  printf("global_1=%p &global_1+1=%p\n",(int)&global_1,(int)(&global_1+1));
  printf("global_2=%p &global_2+1=%p\n",(int)&global_2,(int)(&global_2+1));
  printf("global_3=%p &global_3+1=%p\n",(int)&global_3,(int)(&global_3+1));
  printf("global_4=%p &global_4+1=%p\n",(int)&global_4,(int)(&global_4+1));
}

global_1=004237B0 &global_1+1=004237B4
global_2=004237B4 &global_2+1=004237B5
global_3=004237A0 &global_3+1=004237A2
global_4=004237AC &global_4+1=004237B0

//第二题答案  各数据类型不同，加1 再原来地址上加的字节数也不同
