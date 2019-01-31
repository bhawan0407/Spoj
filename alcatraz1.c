#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int sum = 0;
        char s[55];
        scanf("%s", s);
        int len = strlen(s);

        int i;
        for(i = 0; i < len; i++)
        {
            sum += (s[i] - '0');
        }

        printf("%d\n", sum);
    }
    return 0;
}
