#include<stdio.h>
int main()
{
int i,j,s;

printf("enter the size of square\n");
scanf("%d",&s);

for(i=1 ; i<=s ; i++)
{
   for(j=1 ; j<=s ; j++)
   {
       printf("* ");
    }
  printf("\n");
}
  return 0;
}
