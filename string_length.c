#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int nchar = 0,i,len;
    char str[20];
    printf("Enter any string: ");
    gets(str);
    len = strlen(str);
    for(i=0; i<len;i++)
        {
            if(str[i] != ' ')
               nchar++;
        }
    printf("Length of string: %d",nchar);
    return 0;
}
