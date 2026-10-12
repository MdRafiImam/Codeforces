#include<stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);
        int r[n], j;
        for(j=0; j<n; j++)
        {
            scanf("%d", &r[j]);
        }
        int sum1=0, sum2=0;
        for(j=0; j<n; j++)
        {
            if(r[j]%2==0)
            {
                sum1 = sum1 + r[j];
            }
        }
        for(j=0; j<n; j++)
        {
            if(r[j]%2!=0)
            {
                sum2 = sum2 + r[j];
            }
        }
        if(sum1 > sum2)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}