#include <stdio.h>
#define LL long long int

int main()
{
    int t;
    scanf("%d", &t);
    LL x,a;
    while(t--)
    {
        scanf("%lld %lld", &x, &a);
        LL n = a - x;
        LL avg = a + 1;
        LL sum = n * avg;
        LL tmp = (n * (n-1))/2;
        LL res = sum - tmp;

        printf("%lld\n", res);
    }
    return 0;
}
