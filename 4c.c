#include<stdio.h>
int main()
{
int n,bin=0,i=1,rem;
printf("enter decimal number : ");
scanf("%d",&n);
while(n != 0)
{
rem=n%2;
bin=bin+rem*i;
n=n/2;
i=i*10;

}
printf("bin=%d",bin);
return 0;
}
