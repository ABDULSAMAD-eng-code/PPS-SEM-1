#include<stdio.h>
void main()
{
int num[5],i,min;
printf("enter the values");

   for(i=0;i<5;i++)
   scanf("%d",&num[i]);
                   min=0;
    for(i=0;i<5;i++)
      {
      if(num[i]<min)
      {
      min=num[i];
      }
      }
      printf("minimum value = %d",min);
}
