****************************************************************************
###  1

 #include <stdio.h>
 #include <math.h>

 int  prime(int x)

   {
      int j = 0;

      for ( j = 2; j <= sqrt(x); j++)
        {
          if ( x % j == 0)
            return 0;
        }

      return 1;
    
    }

  
  int main ( void )

    {
      int begin = 1;
      int end = 100;
      int i = 0;
      int max = 0;

      for ( i = begin; i <= end; i++)
         {
            if (prime ( i ) == 1)
              max = i;
         }

       printf("%d\n",max);

       return 0;

     }
