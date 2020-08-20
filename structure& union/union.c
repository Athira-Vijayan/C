#include<stdio.h>

int main()
{
  union value
  {
    int i;
    char c;
  };

  union value v;
  v.i = 10;
  v.c ='a';
  printf("i=%d\tc=%c",v.i,v.c); //in union only one member can contain a value at a given time
  return 0;
}
