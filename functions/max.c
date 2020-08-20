#include<stdio.h>

int max(int x, int y)
{
     return (x>y)?x:y;
}

int main()
{
    int n,m,maximum;
    scanf("%d %d",&n,&m);
    maximum = max(n,m);
    printf("%d", maximum);

    return 0;
}
