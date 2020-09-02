#include<stdio.h>
#define size 10

int main()
{
 FILE *fr = fopen("file.txt","r");
 FILE *fw = fopen("file_copy.txt","w");
 char str[size];

 if(fr&&fw)
 {
  while(fgets(str,size,fr)!=NULL)
  {
    fputs(str,fw);
  }
  fclose(fr);
  fclose(fw);
 }
 return 0;
}
