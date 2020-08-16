//Write a C program to get the integer array from the user and print odd indices.

#include<stdio.h> 

int main()
{
    int N,i;
  
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<N;i+=2)
    {
        printf("%d",arr[i]);  
    }
   

    return 0; 
}
