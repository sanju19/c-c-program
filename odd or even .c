#include<stdio.h>
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if(n % 2 ==0)
         printf("%d is even number.",n);
    else
         printf("%d is odd number.",n);
    return 0;
}
