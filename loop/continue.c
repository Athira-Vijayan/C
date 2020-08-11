//Write a C program to get 5 characters from the user and print only the consonant characters.
#include<stdio.h>
int main()
{ //Edit below this line
   int i;
   char c;
   for(i=1;i<=10;i++) 
   {
     scanf("%c",&c);
     if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
       continue; 
     else 
       printf("%c\n",c);
   } 
   return 0;
} 
