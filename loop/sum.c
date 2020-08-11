//sum of digits of an integer
#include<stdio.h>

int main()
{
    int num;
    int rem,sum=0;
    scanf("%d", &num);
    while(num>0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("%d",sum);  

    return 0;
}
