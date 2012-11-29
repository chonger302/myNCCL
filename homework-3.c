
###exercises 

##1.1
********************************************
#include <stdio.h>

int main(void)
{
    int counter;

    printf("hello, NCCL!\n");

    counter =  10;
    while (counter > 0)
    {
        
        printf("counter = %d\n", counter);
        counter--;
    }

    return 0;
}

##1.2
*********************************************

#include <stdio.h>

int main(void)
{
    int counter;

    printf("hello, NCCL!\n");

    counter = 10 ;
    do
    {
        printf("counter = %d\n",counter);
        counter--;

    } while (counter > 0);

    return 0;
}


##2.1
**********************************************************
#include <stdio.h>

int main(void)
{
    int counter;
    int sum;

    printf("hello, NCCL!\n");

    counter = 1;
    sum = 1;
    while (counter < 10)
    {
        counter++;
        sum = sum + counter;


    }
    printf("sum = %d\n", sum);

    return 0;
}


##2.2
*******************************************************************
#include <stdio.h>

int main(void)
{
    int counter;
    int sum;

    printf("hello, NCCL!\n");

    counter = 1;
    sum = 1;

    do
    {
        counter++;
        sum = sum + counter;

    } while (counter < 10);

    printf("sum =%d\n", sum);

    return 0;
}




