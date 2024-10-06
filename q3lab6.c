#include <stdio.h>
int main()
{
int a,i;
i=1;
while(i<=3)
{
    printf("enter atm pin\n");
   scanf("%d",&a);
    if (a!=5678)
	{
    i=i+1;
    continue;
	}
	else
	{
		printf("correct pin");
	return 0;
    }
}
	printf("your card is blocked");
return 0;
}
