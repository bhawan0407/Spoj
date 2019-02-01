#include<stdio.h>
#define ULL unsigned long long int

int main()
{
    int t;
    scanf("%d", &t);
    ULL n, tmp, res;
    while(t--)
    {
        scanf("%llu", &n);
        if(n <= 2)
        {
            printf("1\n");
            continue;
        }

        tmp = n % 4;
        if(tmp != 2)
            res = (n - 1)/2;
        else
            res = (n - 4)/2;

        printf("%llu\n", res);
    }   

    return 0;
}
