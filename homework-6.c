**********************************************************************************8
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

