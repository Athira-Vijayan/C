//Write a C program to get a positive integer number from the user and print the result of number / 16 using bit-wise right shift operator.

#include<stdio.h> 

int main()
{
   int n,temp;
   scanf("%d",&n);
   if(n>0)
     temp = n>>4;
     printf("%d",temp);   

    return 0; 
}
