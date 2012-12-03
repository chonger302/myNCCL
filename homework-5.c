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

********************************************************************************
### 3
int main(void)

{
  int i,j;
  
  printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");

  for(j = 1; j < 5; j++)
    printf(" \t");

  for(i = 1; i <= 30; i++)
    {
      printf(" %d", i );
      printf("\t");
      
      if((i + 4) % 7 == 0)
        {    
         printf("\n");
         printf("\n");
        } 

     }

   printf("\n");

   return 0;
}

