#include<stdio.h>
int main()
{
 struct student
 {
  char name[10];
  int age;
  int roll;
  int DOB;
 };
 struct student s ={"ammu",12,2,1052008};
 struct student *ptr = &s;
 printf("%s\n",ptr->name);
 printf("%d\n",ptr->age);
 printf("%d\n",ptr->roll);
 printf("%d\n",ptr->DOB);
 return 0;
}
