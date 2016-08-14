#include <stdio.h>
#include <stdlib.h>
int main()
{
  int r,i,j;
  printf("Enter the number range: ");
  scanf("%d",&r);
  for(i=1;i<=r;i++)
    {
      for(j=1;j<=10;j++)
           printf("%d*%d=%d ",i,j,i*j);
      printf("\n");
    }
  return 0;
}
