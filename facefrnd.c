#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    int a[10000] = {0};

    while(n--)
    {
        int x;
        scanf("%d", &x);
        a[x] = 2;

        scanf("%d", &x);
        while(x--)
        {
            int m;
            scanf("%d", &m);
            if(a[m] == 0)
            {
                a[m] = 1;
            }
        }   
    }

    int i;
    for(i = 0; i < 10000; i++)
    {
        if(a[i] == 1)
            count++;
    }

    printf("%d\n", count);

    return 0;
}
