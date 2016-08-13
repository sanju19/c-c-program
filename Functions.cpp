#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int m[4],large=0,i;
    m[0]= a;
    m[1]=b;
    m[2]=c;
    m[3]=d;
    
    for(i=0;i<4;i++)
    {
        if(m[i] > large)
        {
            large = m[i];
        }   
     }
   return(large);   
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
