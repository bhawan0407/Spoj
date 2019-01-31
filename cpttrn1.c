#include <stdio.h>
#include <stdbool.h>

int main()
{
    int t;
    scanf("%d", &t);
    int m,n,i,j;
    while(t--)
    {
        bool first = true;
        char prev; // = '.';
        scanf("%d %d", &m, &n);
        for(i = 0; i < m; i++)
        {
            if(first)
                prev = '.';
            else
                prev = '*';

            for(j = 0; j < n; j++)
            {
                if(prev == '.')
                {
                    printf("*");
                    prev =  '*';
                }
                else
                {
                    printf(".");
                    prev = '.';
                }
            }

            first = !first;
            printf("\n");
        }
    }
    return 0;
}
