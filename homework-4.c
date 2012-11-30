#include <stdio.h>

int main(void)
{
    int first,second;
    
    printf("please input a number first : ");
    scanf("%d", &first);
    
    while ( first != second )
       
     {
       printf("please input a number second : ");
        scanf("%d", &second);
        
        if   (first < second )
         printf("max\n");
        if   (first > second )   
         printf("min!\n");   
     } 
     
    printf("very,good!\n");
    return 0;
}