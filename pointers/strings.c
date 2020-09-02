#include<stdio.h>
int main()
{
 char str[10];
 scanf("%s",str);
 int i;
 for(i=0;str[i]!='\0';i++)
 {
  printf("%c",*(str+i)); //printing the character
  printf("%p\n",str+i);  //printing the address
 
 }
 return 0;
}
