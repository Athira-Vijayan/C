#include<stdio.h>
int main()
{
  int num,i,t1=0,t2=1,next_term;
  scanf("%d",&num);
  
  for(i=0;i<=num;i++)
  {

    printf("%d",t1);
    next_term=t1+t2;
    t1=t2;
    t2=next_term;
  }
  
  return 0;
}
