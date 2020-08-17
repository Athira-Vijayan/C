#include<stdio.h>
#include<string.h>

int main()
{
  char s[20];
  scanf("%s",s);
  int i,l,f=1;
  l=strlen(s);
  int j=l-1;
  for(i=0;i<l/2;i++)
  {
    if(s[i]!=s[j-i])
    {
      f=0;
      break;
    }
  }
  if(f==1)
  {
    printf("Palindrome");
  }
  else
  {
    printf("Non-Palindrome");
  }
  return 0;
}
