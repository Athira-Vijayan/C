//In the below program, make the pointer variable 'ptr' refers to the integer variable 'i' and print the address and value of 'i' using ptr.


#include<stdio.h>

int main()
{
    int i = 100;
    int *ptr =&i;
    printf("value of i is =%d\n",i);
    printf("value stored at pointer = %d\n",*ptr);
    printf("address of i = %p\n",&i);
    printf("ptr points to address = %p\n",ptr);
    printf("address of ptr = %p\n",&ptr);
   
    return 0;
}

