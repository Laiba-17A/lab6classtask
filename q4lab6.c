#include <stdio.h>
int main()
{
int i,a,streak;
streak=0;
for(i=1;;i++)
{
printf("sent message ?\n select1 for yes and 0 for no");
scanf("%d",&a);
if (a==0)
{
break;
}
else
{
streak=streak+1;
}
}
printf("your streak is %d",streak);
return 0;
}
