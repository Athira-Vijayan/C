//palindrome of number
#include<stdio.h>
int main()
{
 int num,temp_no,rem,temp_rem=0;
 scanf("%d",&num);
 temp_no=num;
 while(num>0)
 {
   rem = num%10;
   temp_rem = temp_rem*10+rem;
   num/=10;

 }
 if(temp_no==temp_rem)
 {
    printf("Palindrome");
 }
 else
 {
    printf("Not Palindrome");
 }

 return 0;
}
