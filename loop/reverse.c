//reverse a given number
#include<stdio.h>
int main()
{
 int num;
 scanf("%d",&num);
 while(num>0)
 {
   if(num%10!=0) 
   printf("%d",num%10);
   num/=10;
     
 }
 return 0;
}
