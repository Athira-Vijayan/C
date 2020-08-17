// check if palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
  char s[20];
  scanf("%s",s);
  char rev[20];
  int l=strlen(s);
  int i,j=0;

  for(i=l-1;i>=0;i--)
  {
    rev[j]=s[i];
  }
  rev[j]='\0';

 

  if(strcmp(s,rev)==0)
  
  {
   
    printf("Palindrome");
  }
  else
  {
    
    printf("Non-Palindrome");
  }

  return 0;
}



