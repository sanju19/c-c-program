
#include<stdio.h>
int main()
{
    int n,sum = 0,i;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum = sum + 1;
    printf("Sum of n numbers: %s",sum);
    return 0;
}
