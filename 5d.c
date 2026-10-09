#include<stdio.h>
int main()
{
   int a,b,c,S;
   long fact1,fact2,fact3;

   printf("enter the no. of rows:");
   scanf("%d",&S);

   for(a=0;a<S;a++)
   {
     for(c=0; c<S-a-1;c++)
     printf(" ");

     for(b=0;b<=a;b++)
     {
     fact1 =1;
     fact2 =1;
     fact3 =1;

     for(c=1;c<=a;c++)
     fact1 = fact2 *c;

     for(c=1;c<=b;c++)
     fact2 = fact2 *c;

     for(c=1;c<=a-b;c++)
     fact3 = fact3 *c;
     printf("%1d",fact1/(fact2*fact3));

         }
         printf("\n");
   }

return 0;
}
