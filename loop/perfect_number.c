//check whether a number is perfect or not
//Perfect number is a number which is equal to sum of its divisor

#include<stdio.h>
int main()
{
  int n,i,sum=0;
  scanf("%d",&n);
  for(i=1;i<=n-1;i++)
  {

    if(n%i==0)
      sum+=i;
  }
  if(n==sum)
  {
    printf("perfect");
  }
  else
  {
    printf("not perfect");
  }
  return 0;
}
