//reversing the string

#include<stdio.h>
#include<string.h>

int main()
{
  char s[20];
  scanf("%s",s);
  char reverse[20];

  int l = strlen(s); //finding length of string
  int i,j=0;
  for(i=l-1;i>=0;i--) //copying last char of original str to first index of rev string
  {
    reverse[j]=s[i];
    j++;
  }
  reverse[j]='\0';
  printf("%s",reverse);
  return 0;
}    
  
