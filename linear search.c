#include<stdio.h>
void main()
{
   int num[5],i,key,s=0;
printf("enter the values");

   for(i=0;i<5;i++)
   scanf("%d",&num[i]);

     printf("enter key value to be searched :  ");
     scanf("%d",&key);

        for(i=0;i<5;i++)
        {
        if(key==num[i])
        {
         s=1;
         break;
        }
        }
         if(s==1)
           printf("element found at %d ",i+1);
        else
           printf("element not found");
}
