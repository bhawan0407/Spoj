#include<stdio.h>
#include<string.h>

int allNines(char num[], int len)
{
    int i = 0;
    for(i  = 0 ; i < len; i++)
        if(num[i] != '9')
            return 0;

    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char num[1000005];
        scanf("%s", num);
        int len = strlen(num);
        int i,j;

        if(allNines(num, len))
        {
            printf("1");
            for(i = 1; i < len; i++)
                printf("0");
            printf("1");
            printf("\n");
        }
        else
        {
            int leftSmaller = 0;
            if(len % 2 == 0)
            {
                j = len/2;
                i = j - 1;
            }
            else
            {
                i = j = len/2;
            }

            while(i >= 0)
            {
                if(num[i] != num[j])
                    break;

                i--;
                j++;
            }

            if(i < 0 || num[i] < num[j])
                leftSmaller = 1;

            while(i >= 0)
            {
                num[j] = num[i];
                j++;
                i--;
            }


            if(leftSmaller)
            {
                int carry = 1;
                if(len % 2 == 0)
                {
                    j = len/2;
                    i = j-1;
                }
                else
                {
                    i = j = len/2;
                }

                while(i >= 0)
                {
                    int tmp = (num[i] - '0') + carry;
                    num[i] = tmp % 10 + '0';
                    carry = tmp / 10;
                    num[j] = num[i];
                    j++;
                    i--;
                }
            }

            printf("%s\n", num);
        }
    }
    return 0;
}
