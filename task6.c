#include <stdio.h>
int main() {
int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  if (n<0)
  {
     printf("invalid input");
     return 0;
  }

  if (n == 0 || n == 1)
    flag = 1; // not a prime number

  for (i = 2; i<n; i++) 
  {
      if (n % i == 0) {
      flag = 1;//not a prime number
      break;//loop ends
    }
  }

  if (flag == 0)
  {
      printf("the number is prime.\n");
  // print the first two terms
  printf("Fibonacci Series: 0, 1, ");
  //initialize terms
  int prev=0;
  int next=1;

  // print 3rd to nth terms
  for (int count= 3; count<= n;count++) 
  {
    int temp=next;
    next=next+prev;
    printf("%d, ",next);
    prev=temp;
  }
  }
  else
    printf("%d is not a prime number.", n);
    
return 0;
}
  