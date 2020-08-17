// Concatenate two strings without strcat() function
#include<stdio.h>
int main()
{
 char s1[10],s2[10],s3[20];
 scanf("%s %s",s1,s2);
 int i=0,j=0;
 for(i=0;s1[i]!='\0';i++)
 { 
   s3[j]=s1[i]; //assigning each element of s1 to s3
   j++;
 }
 int k=0;
 for(k=0;s2[k]!='\0';k++)
 { 
   s3[j]=s2[k];
   j++;
 }
 s3[j]='\0';
 printf("%s",s3);
 return 0;
}


