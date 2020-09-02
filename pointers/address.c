//swap using call by reference
#include<stdio.h>
void swap(int *a,int *b)
{
  int c;
  c=*a;
  *a=*b;
  *b=c;
}

 
int main()
{
  int x,y;
  //printf("enter the numbers:");
  scanf("%d %d",&x,&y);
  swap(&x,&y);
  printf("%d %d",x,y);
  return 0;
}
