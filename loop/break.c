//Write a C program to get and print integers continuously until the user enters an odd number.
#include<stdio.h>
int main()
{
  int n,i;
  while(1)
  {
   // printf("enter number:\n");
    scanf("%d",&n);
    if(n%2!=0)
      break;
    printf("%d\n",n);
  }
    

 
  return 0;
}

