#include<stdio.h>

struct student
{
  int roll;
  char name[10];
  int age;
  int mark;
};


int main()
{
  int N;
  scanf("%d",&N);
  struct student s[N];
  int i;
  printf("enter student details:\n");

  for(i=0;i<N;i++)
  {
    
    scanf("%d %s %d %d",&s[i].roll,s[i].name,&s[i].age,&s[i].mark);
  }
  
  for(i=0;i<3;i++)
  { 
    if(s[i].mark>=450)
  
    printf("%d %s\n",s[i].roll,s[i].name);
  }
  
  return 0;
}
