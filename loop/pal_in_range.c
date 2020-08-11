//palindrome numbers in a range
#include<stdio.h>
int main()
{
  int num,rem,rev_num,temp_num,start,end;
  printf("Enter lower limit:");
  scanf("%d",&start);
  printf("Enter upper limit:");
  scanf("%d",&end);
  printf("Palindrome numbers between %d and %d are:",start,end);
  
 for(num=start;num<=end;num++)
 {
     temp_num=num;
     rev_num = 0;
    
     while(temp_num)
     {
       rem = temp_num%10;
       temp_num/=10;
       rev_num=rev_num*10+rem;      
     }
     
     if(num==rev_num)
        printf("%d\n",num);
 }
 return 0;
}

 
 
 
