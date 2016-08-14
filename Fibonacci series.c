#include <stdio.h>
#include <stdlib.h>
int main()
{
    int k,r,first=0,second=1,next;
    printf("Enter the number range:");
    scanf("%d",&r);
    printf("FIBONACCI SERIES: ");
    printf("%d %d",first,second);
    for(k=2;k<r;k++){
         next=first+second;
         first=second;
         second=next;
         printf(" %d",next);
    }
 return 0;
}
