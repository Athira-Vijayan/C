#include<stdio.h>
int main()
{
 int n,i,key,f=0;
 printf("number of elements:");
 scanf("%d",&n);

 printf("enter the key:");
 scanf("%d",&key);
 int arr[n];
 printf("enter array:");
 for(i = 0; i < n; i++)
 {
    scanf("%d", &arr[i]);
    if(arr[i]==key)
    {
      f=1;
    }
      
 }


 if(f==1)
 {
    printf("Key Found");
 }
 else
 {
   printf("Key not Found");
  }


 return 0;
}
 
