//find length of string without using inbuilt function
#include<stdio.h>
int main()
{
  char str[1000];

  scanf("%s",str);
  int i = 0;
 // int count = 0;
  //for(i=0;str[i]!='\0';i++)
  while(str[i]!='\0')
  {
    
    i++; //count++;
  }
  printf("%d",i);

  return 0;
}
  
  
