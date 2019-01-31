#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int m,n,i,j;
    while(t--)
    {
        scanf("%d %d", &m, &n);
        for(i=0;i<n;i++)
        {
            printf("*");
        }
        printf("\n");

        for(i = 1; i < m-1; i++)
        {
            printf("*");
            for(j = 1; j < n-1; j++)
            {
                printf(".");
            }
            
            if(n != 1)
                printf("*");
            
            printf("\n");
        }


        if (m != 1)
        {
            for(i=0;i<n;i++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
