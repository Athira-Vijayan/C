#include<stdio.h>
int main()
{
 int *arr[5];
 int a=10,b=20,c=30,d=40,e=50;
 arr[0]=&a;
 arr[1]=&b;
 arr[2]=&c;
 arr[3]=&d;
 arr[4]=&e;
 int i;
 for(i=0;i<5;i++)
 {
   printf("arr[%d]=%ls\n*arr[%d]=%d\n",i,arr[i],i,*arr[i]);

 }
 return 0;
}
