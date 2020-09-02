#include<stdio.h>
int main()
{
 double arr[] = {10.25, 11.25, 13.25, 100.25, 200.25};
 double *P = &arr[0];
 double *Q = &arr[sizeof(arr)/sizeof(arr[0]) - 1];
 printf("%ld",P - Q);
}
