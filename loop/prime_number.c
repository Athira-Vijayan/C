#include<stdio.h>
int main()
{
  int n,i,count=0;
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
  {
   if(n%i==0)
   { 
     count=1;
     break;
   }
  }
  if(n==1)
  {
    printf("neither prime nor composite");
  }
  if(count==0)
  {
    printf("prime");
  }
  else
  {
    printf("not prime");
  }
  return 0;
}
