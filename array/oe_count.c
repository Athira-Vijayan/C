//print the count of even and odd numbers
#include<stdio.h>
int main()
{
 
 int n,i,even_count=0,odd_count=0;

 scanf("%d",&n);
 int arr[n];

 for(i=0;i<n;i++)
 {
   scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
  if(arr[i]%2==0)
  {
   even_count++;     
  }
  else
  {
   odd_count++;
  }
 }
 printf("Odd count=%d",odd_count);
 printf("Even count=%d",even_count);

 return 0;
}
