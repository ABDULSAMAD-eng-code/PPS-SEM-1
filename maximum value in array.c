#include<stdio.h>
void main()
{
int num[5],i,max;
printf("enter the values");

   for(i=0;i<5;i++)
   scanf("%d",&num[i]);
                   max=num[0];
    for(i=0;i<5;i++)
      {
      if(num[i]>max)
      {
      max=num[i];
      }
      }
      printf("maximum value = %d",max);
}
