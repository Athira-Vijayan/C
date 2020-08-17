#include<stdio.h>

void fun(char temp[])
{
    temp[2] = '*';
}

int main()
{
    char str[] = "Hello";

    fun(str);

    printf("%s",str);

    return 0;
}
