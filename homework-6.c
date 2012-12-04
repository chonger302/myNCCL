**********************************************************************************
###  1

#include <stdio.h>

int main(void)

{
  int i,j;

  for(i = 0; i < 5; i++)
    {
      for(j = 0; j < 5; j++)
         printf(" 0\t");
      if(j % 5 == 0)
         printf("\n"); 
         printf("\n"); 
    }
  
  return 0;
}

********************************************************************************
###  2

#include <stdio.h>

int main(void)
{       
    int i,j;

    for (i = 1; i <= 100; i++)
    {   
        for (j = 1; j < i; j++)
        {
          if( i % j == 0)
          printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

