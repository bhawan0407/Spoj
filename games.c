#include<stdio.h>
#include<string.h>

int gcd(int a, int b)
{
    if(b == 0)
        return a;

    return gcd(b, a%b);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char num[10];
        scanf("%s", num);
        int len = strlen(num);
        int i = 0;
        while(i < len)
        {
            if(num[i] == '.')
                break;
            i++;
        }

        if(i == len)
        {
            printf("1\n");
        }
        else
        {
            int res = 0;
            int tmp = 1;
            i++;
            while(i < len)
            {
                res = 10*res + (num[i] - '0');
                tmp = tmp*10;
                i++;
            }
    
            int g = gcd(res, tmp);
            printf("%d\n", tmp/g);
        }
    }
    return 0;
}
