#include <stdio.h>

int main(void)
{
    int A,B;
    
    printf("please input a number A : ");
    scanf("%d", &A);
    
    while ( A != B )
       
     {
       printf("please input a number B : ");
        scanf("%d", &B);
        
        if   (A < B )
         printf("max\n");
        if   (A > B )   
         printf("min!\n");   
     } 
     
    printf("very,good!\n");
    return 0;
}