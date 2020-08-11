//Get a positive number (N) from the user and enable Nth bit (1<=N<=32)
#include<stdio.h> 
int main()
{ 
  int status = 0; 
  int n,mask = 1;
  scanf("%d",&n); 
  status = status | mask;
  status = status << n-1;
  printf("%d", status); 
  return 0;
}
