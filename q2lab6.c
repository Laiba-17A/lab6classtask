#include <stdio.h>
int main()
{
int i,a,b,sum;
sum=0;
printf("enter num1(smaller num)");
scanf("%d",&a);
printf("enter num2(larger num)");
scanf("%d",&b);
if (a==1)
a=a+1;
for (i=a;i<=b;)
{
if (a%2!=0)
{
a=a+1;
}
sum=sum+a;
i=i+2;
a=i;
}
printf("the sum is %d",sum);

return 0;
}
