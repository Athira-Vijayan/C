#include<stdio.h>
#include<string.h>

int main()
{
  char s[20];
  scanf("%s",s);
  int l=strlen(s);
  int i;
  for(i=l-1;i>=0;i--)
  {
    printf("%c",s[i]);
  }
  return 0;
}
