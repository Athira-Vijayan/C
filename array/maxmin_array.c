#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

 
    int max = arr[0];
    int min = arr[0];

    for(i = 0; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i]<min)    
            min = arr[i];
    }
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    return 0;
}
