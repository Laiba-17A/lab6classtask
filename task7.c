#include <stdio.h>
#include <math.h>
int main() {
    int n,temp,a,sum,cube;
    printf("enter any number");
    scanf("%d",&n);
    temp=n;
    sum=0;
    
    int len=0;
    int temp2=n; //to find length of integer
    while (temp2>0){
        temp2=temp2/10;
        len=len+1;
    }
    //to find the sum of cubes of it's digits
    while (n>0)
    {
     a=n%10;
     cube=pow(a,len);
     sum=sum+cube;
     n=n/10;
    }
    if (sum==temp) 
    {
        printf("the number is an armstrong");
    }
    else
    {
        printf("the number is not an armstrong");
    }
    return 0;
}