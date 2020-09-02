#include<stdio.h>
#include<string.h>
int main()
{
 char str[50];
 scanf("%s",str);
 int i;
 int l = strlen(str);
 for(i=l-1;i>=0;i--)
 {
   printf("%s\n",str+i);
 }
 return 0;
}
