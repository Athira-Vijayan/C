//compare two strings
#include<stdio.h>
#include<string.h>

int main()
{
  char str1[10];
  char str2[10];
  scanf("%s %s",str1,str2);
  if(strcmp(str1,str2)==0)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}
