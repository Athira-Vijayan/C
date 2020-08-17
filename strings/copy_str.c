//copy string without using strcpy()
#include<stdio.h>
int main()
{
  char str[10], copy_str[10];
  scanf("%s",str);
  int i;
  for(i=0;str[i]!='\0';i++)
  {
    copy_str[i]=str[i];
  }
  copy_str[i]='\0';
  printf("Copied string = %s",copy_str);
  return 0;
}
  
