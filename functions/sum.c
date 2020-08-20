//sum of two numbers using function
#include<stdio.h>

int sum(int x, int y)
{
  int ans = x+y;
  return ans;
}

int main()
{
  int a,b,result;
  scanf("%d %d",&a,&b);
  result = sum(a,b);
  printf("%d",result);
}
