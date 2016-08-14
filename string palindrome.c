#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
  char str[50],rev[50];
  int i,j;
  printf("\nEnter a string:");
  scanf("%s",str);
  for(i=strlen(str)-1;i>=0;i--)
  {
      for(j=0;j<strlen(str);j++)
        rev[j]=str[i];
      rev[j]='\0';
  }
  if(strcmp(rev,str))
      printf("\nThe string is a palindrome");
  else
      printf("\nThe string is not a palindrome");
  return 0;
}
