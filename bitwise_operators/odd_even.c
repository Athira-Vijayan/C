//check odd or even using bitwise operator
#include<stdio.h>
int main()
{
  int N = 0;
  scanf("%d",&N);
  if(N&1==1)
    printf("Odd");
  else
    printf("Even");

  return 0;
}
