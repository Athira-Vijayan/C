#include<stdio.h> 

int main()
{
    int N,i,sum=0;
  
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];//sum of elements in the array
      
    }
  
    printf("%d",sum); 
   

    return 0; 
}
