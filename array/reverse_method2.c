//reversing the elements using swap method
#include<stdio.h>
int main()
{
  int n,i,last_index;
  scanf("%d",&n);
  last_index=n-1;
  int arr[n];
  for(i=0;i<n;i++)
  {
   scanf("%d",&arr[i]);
  }
  
  for(i=0;i<=(n-1)/2;i++)
  {
    int temp=arr[i];
    arr[i]=arr[last_index-i];
    arr[last_index-i]=temp;
  }
  for(i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  }
}
