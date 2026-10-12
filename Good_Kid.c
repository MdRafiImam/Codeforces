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
        int min=r[0], new;
        for(j=0; j<n; j++)
        {
            if(r[j]<min)
            min = r[j];
        }
        new = min + 1;

        long long int rmv=0, mult=1, ans;
        for(j=0; j<n; j++)
        {
            if(r[j]==min && rmv==0)
            {
                rmv=1;
                continue;
            }
            mult = mult * r[j];
        }
        ans = mult * new;
        printf("%lld\n", ans);
    }
}