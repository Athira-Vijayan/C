#include<stdio.h>
#include<string.h>
int main()
{
  char str1[12]="Hello World";
  char *pos;
  pos = strchr(str1,'o'); //pos = strstr(str1,"World");
  printf("%c",*pos);     //printf("%s",pos);
  return 0;
}
