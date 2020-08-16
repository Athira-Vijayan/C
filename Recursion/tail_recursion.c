#include<stdio.h>
 
void fun(int n)
{
  if(n==0)
    return;
  else
    printf("%d",n);
  return fun(n-1);  //recursive call is the last thing done by the function. No need to keep record of previous state. 

}
int main()
{
  fun(3);
}
