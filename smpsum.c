#include <stdio.h>

int  sum(int n)
{
    return (n * (n+1) * (2*n+1))/6;
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    int res = sum(b) - sum(a-1);

    printf("%d\n", res);

    return 0;
}

