 #include<stdio.h>
int main()
{
   int i,n,m;
    printf("Enter the range of numbers: ");
    scanf("%d %d",&n,&m);
    if (n%2==0)
        {
           for(i=n;i<=m;i=i+2)
              printf("%d ",i);
        }
    else
    {
        n =n+1;
        for(i=n;i<=m;i=i+2)
              printf("%d ",i);

    }
    return 0;
}
