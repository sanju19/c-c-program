#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
     int i,a,b;
    string num[9]={"one","two","three","four","five","six","seven","eight","nine"};    
    scanf("%d %d",&a,&b);
    i=a;
    for(;i<=b;i++)
       {
        if(i<=9)
            {
            i=i-1;
           cout << num[i];
           printf("\n");
            i++;
             }
        else if ((i>9)&&(i%2==0))
            printf("even\n");
        else
            printf("odd\n");
       }        
    return 0;
}
