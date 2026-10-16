#include<stdio.h>
int main()
{
int n,oct=0,i=1,rem;
printf("enter decimal number : ");
scanf("%d",&n);
while(n != 0)
{
rem=n%8;
oct=oct+rem*i;
n=n/8;
i=i*10;

}
printf("oct =%d",oct);
return 0;
}
