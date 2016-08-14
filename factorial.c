#include <stdio.h>
#include <stdlib.h>
int Factorial(int);
int main()
{
  int f,num;
  printf("Enter a number: ");
  scanf("%d",&num);
  f=Factorial(num);
  printf("Factorial of %d is: %d",num,f);
  return 0;
}

int Factorial(int num)
{
    int i,f=1;
    if(num==0 || num==1)
        return(1);
    else
    {
      for(i=1;i<=num;i++)
         f=f*i;
      return f;
    }
}
