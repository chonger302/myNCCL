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

  int main (void)
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
   
******************************************************************************
###  2

#include <stdio.h>

int main(void)
 {
    int fir_num, sec_num;
    int counter,tmp;

    printf ("Please input first number:");
    scanf ("%d", &fir_num);
    printf ("Please input second number:");
    scanf ("%d", &sec_num);

    counter = 0;
    while (fir_num != 0 && sec_num != 0)
        {
           tmp = compare(fir_num % 10, sec_num % 10);

           if (tmp == 1)
              counter++;

           fir_num /= 10;
           sec_num /= 10;
        }

    printf ("Position the number of digits are the same for: %d\n",counter);

 }


int compare(int m, int n)
 {
    if (m == n) 
      return 1; 
    else
      return 0;
 }
