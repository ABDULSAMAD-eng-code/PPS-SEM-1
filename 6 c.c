#include<stdio.h>
int gcd(int x1, int x2)
{
if (x2 != 0)
   return gcd(x2, x1% x2);
return x1;
}
int main()
{
int a,b,result ;

printf("enter two values: ");
scanf("%d %d",&a ,&b);

result = gcd(a,b);
printf("GCD of %d and %d is %d",a,b,result);

return 0;
}
