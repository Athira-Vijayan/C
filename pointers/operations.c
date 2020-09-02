//Write four separate functions for sum, subtraction, multiplication, and division. Get the operator and two numbers from the user. Based on the information get the appropriate function address using function pointer and execute it
#include<stdio.h>
typedef int(*FP)(int,int);

int sum(int a,int b)
{
 return a+b;
}
int subtraction(int a,int b)
{
 return a-b;
}
int multiplication(int a,int b)
{
 return a*b;
}
int division(int a,int b)
{
 return a/b;
}
FP get(char c)
{
 if(c=='+')
 {
   return sum;
 }
 else if(c=='-')
 {
   return subtraction;
 }
 else if(c=='/')
 {
   return division;
 }
 else
 {
   return multiplication;
 }
}

int main()
{

 FP fp;
 int x,y;
 char ch;
 printf("Enter the operation:");
 scanf("%c",&ch);
 fp=get(ch);
 printf("enter two numbers:");
 scanf("%d %d",&x,&y);
 printf("Result=%d",(*fp)(x,y));
 return 0;
}
