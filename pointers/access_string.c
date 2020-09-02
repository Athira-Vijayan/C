#include<stdio.h>
int main()
{
 char str[6]="Hello";
 char *ptr;
 ptr = str;
 int i;

 for(i=0;ptr[i]!='\0';i++)
 {
   printf("%p",ptr+i); //address of each character
   printf("%c\n",*(ptr+i)); // printing each character 
 }
 return 0;
}
