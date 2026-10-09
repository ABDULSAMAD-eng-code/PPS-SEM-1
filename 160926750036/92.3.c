#include <stdio.h>
int main()
{
       int num;
       printf("Enter your age:") ;
       scanf("%d" ,&num) ;
       if(num-18<0)
                   printf("%d is not eligible" ,num) ;
       else
                   printf("%d is eligible" ,num) ;
}
