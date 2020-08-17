//count vowels in string
#include<stdio.h>
int main()
{
  char str[10];
  scanf("%s",str);
  int i=0,vowels=0;
  
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    {
      vowels++;
    }

  printf("Vowel count = %d",vowels);

  return 0;
}

