#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int m[1000],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&m[i]);
    for(i=n-1;i>=0;i--)
        printf("%d ",m[i]);
    return 0;
}
