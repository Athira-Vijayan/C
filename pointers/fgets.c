#include<stdio.h>
#define size 10
int main()
{
 FILE *fp=fopen("file.txt","r");
 char str[size];
 if(fp!=NULL)
 {
  while(fgets(str,10,fp)!=NULL)
  {
   printf("%s",str);
  }
 }
 fclose(fp);
 return 0;
}
