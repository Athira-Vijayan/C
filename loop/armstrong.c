//whether a number is armstrong or not
#include<stdio.h>
int main()
{
 int num,temp_num,rem,cube=0;
 scanf("%d",&num);
 temp_num=num;
 while(num>0)
 {
   if(num%10!=0)
   rem=num%10;
   cube+=rem*rem*rem; 
  
   num/=10;     
 }
 if(cube==temp_num)
 {
   printf("Armstrong number");
 }
 else
 {
   printf("Not Armstrong number");
 }
 return 0;
}
