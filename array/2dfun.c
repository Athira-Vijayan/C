#include<stdio.h>

#define ROW 2
#define COL 2

void fun(int arr[][COL]) //passing 2D array to function
{
 int i,j;
 for(i=0;i<ROW;i++)
  for(j=0;j<COL;j++)
   printf("%d",arr[i][j]);
} 


int main()
{
  int arr[ROW][COL] = {1,2,3,4};
  fun(arr);
  return 0;
}
