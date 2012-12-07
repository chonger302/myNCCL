****************************************************************************
###  1

#include <stdio.h>
#include <math.h>

 int  prime(int x)

   {
      int j;

      for ( j = 2; j <= sqrt(x); j++)
        {
          if ( x % j == 0)
            return 0;
        }

      return 1;
    
    }

  
  int main ( void )

    {
      int i;
      int max = 0;

      for ( i = 2; i <= 100; i++)
         {
            if (prime ( i ) == 1)
              max = i;
         }

       printf("%d\n",max);

       return 0;

     }
