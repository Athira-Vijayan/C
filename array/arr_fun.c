#include<stdio.h>

void display(int arr[],int n) //passing an array to a function
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  }
}

int main()
{
  int arr[5] = {10,20,30,40,50};

  display(arr,5);
  
  return 0;
}
