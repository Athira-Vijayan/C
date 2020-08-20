#include<stdio.h> 
struct student
{
  int roll; 
  char name[10];
  int age;
}; 
int i;
void fun(struct student obj[i])
{
 
 printf("%d",obj[i].roll);
 printf("%s",obj[i].name); 
 printf("%d\n",obj[i].age);
} 
int main()
{ 
 int n; 
 scanf("%d",&n); 
 struct student s[n]; 
 for(i=0;i<n;i++)
 { 
  scanf("%d",&s[i].roll); 
  scanf("%s",s[i].name);
  scanf("%d",&s[i].age); 
 } 
 for(i=0;i<n;i++)
 {
  fun(s); 
 }
 return 0; 
}
