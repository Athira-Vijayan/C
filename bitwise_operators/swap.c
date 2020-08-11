// swap numbers using xor
#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d %d",&a,&b);
  
  c = a^b;
  b = b^c; //gives a
  a = a^c; // gives b
  printf("%d %d",a,b);
  return 0;
}
