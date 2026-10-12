#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long r[n], i, j;
    for(i=0; i<n; i++)
    {
        scanf("%lld", &r[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=1; j<r[i];)
        {
            j=j*2;
        }
        if(j==r[i])
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
}