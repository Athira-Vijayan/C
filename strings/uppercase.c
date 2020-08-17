//coverting uppercase letters to lowercase and vice versa without using function
#include<stdio.h>
int main()
{ 
  char str[20];
  scanf("%s",str);
  int i;
  for(i=0;str[i]!=0;i++)
  { 
    if(str[i]>='a'&&str[i]<='z')
    {
      str[i]-=32;  //ASCII of 'a'= 97 and of 'A'=65, difference is 32
    }
    else if(str[i]>='A'&& str[i]<='Z')
    {
      str[i]+=32;
    }
  }
  printf("%s",str);
  return 0;
}
 
