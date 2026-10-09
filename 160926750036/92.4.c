#include <stdio.h>
int main()
{
       int num;
       printf("Enter your age:") ;
       scanf("%d" ,&num) ;
       if(num-18<0)
                   printf("you are not eligible" ,num) ;
       else
                   printf("you are eligible" ,num) ;
}
