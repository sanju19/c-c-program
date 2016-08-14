
 #include<stdio.h>
int main()
{
   int n;
   float marks, sum = 0;
   printf("Enter total numbers of student: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      printf("Enter marks of student %d: ",i);
      scanf("%f",&marks);
      sum = sum + marks;
    }
printf("Average marks: %f",sum/n);
return 0;
}
