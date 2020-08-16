#include<stdio.h>
int main()
{
  int row,col,i,j,sum=0;
  printf("enter number of rows:");
  scanf("%d",&row);
  printf("enter number of columns:");
  scanf("%d",&col);
  
  int arr[row][col];
  printf("enter the array elements:");
  for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
      scanf("%d",&arr[i][j]);
      printf("\t%d",arr[i][j]);
      sum+=arr[i][j];
    }
  }
  printf("Sum=%d\n",sum);

  return 0;
}
