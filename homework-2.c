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
#include <stdio.h>

int global = 100;

int main(void)
{

    printf("global+1 at %p\n", &global+1);
    
    return 0;
}   

 input: 無
output:

global+1 at 0x804a018

4
#include <stdio.h>

int   a = 100;
char  b = 101;
short c = 102;
float d = 103;

int main(void)
{
    
    printf("a at %p\n", &a);
    printf("b at %p\n", &b);
    printf("c at %p\n", &c);
    printf("d at %p\n", &d);

    return 0;
}   
input: 無
output:

a at 0x804a014
b at 0x804a018
c at 0x804a01a
d at 0x804a01c

5
#include <stdio.h>

int   a = 100;
char  b = 101;
short c = 102;
float d = 103;

int main(void)
{
    
    printf("a at %p\n", a);
    printf("b at %p\n", b);
    printf("c at %p\n", c);
    printf("d at %p\n", d);

    return 0;
}   
input: 無
output:

a at 0x64
b at 0x65
c at 0x66
d at (nil)

6
#include <stdio.h>

int   a = 100;
char  b = 101;
short c = 102;
float d = 103;

int main(void)
{
    
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);

    return 0;
}   
 input: 無
output:

a = 100
b = 101
c = 102
d = 0
