#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],i,n;
    printf("Enter no of element:");
    scanf("%d", &n);
    printf("Enter the element:");
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
       printf("%d ",arr[i]);
    return(0);
}
