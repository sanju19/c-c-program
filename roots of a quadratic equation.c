#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    double x,y,d;

    printf("Enter a , b , c of quadratic equation: ");
    scanf("%d%d%d",&a,&b,&c);

    d = sqrt(b * b - 4 * a * c);
    x = (-b + d) / 2 * a;
    y = (-b - d) / 2 * a;

    if(d<0)
       printf("Root are not real");
    else if(d==0)
    {
       printf("Root are same\n");
       printf("Solution of quadratic equation are %lf",x);
    }
    else
    {
    printf("Root are real and distinct\n");
    printf("Solution of quadratic equation are %lf , %lf",x,y);
    }

    return 0;
}
