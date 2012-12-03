*******************************************************************************
### 1
#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;
    int value;
    int average;
    
    for ( i = 0; i < 5; i++)
      {
        printf("please input an integer number: \n");
        scanf("%d",&value);
        sum+=value;
      }

    average=sum/5;
    printf("The average is : %d\n",average);
  
    return 0;
}



