//printing prime numbers within a range
#include<stdio.h>
int main()
{ 
  int start,end,i,j,count;
  printf("enter the range:");
  scanf("%d %d",&start,&end);
  printf("prime numbers between %d and %d:\n",start,end);
 
  for(i=start+1;i<end;i++)
  {
     count=0;
     for(j=2;j<=i/2;j++)
     {
       if(i%j==0)
       { 
         count=1;
         break;
       }
     }
     if(count==0)
     {
        printf("%d\n",i);
     }
   }
   return 0;
}
 
