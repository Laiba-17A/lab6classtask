#include <stdio.h>
int main()
{
int a,sum;
do
{
printf("enter any number");
scanf("%d",&a);
sum=sum+a;
}
while (a!=0);
printf("the sum is %d",sum);

return 0;
}
