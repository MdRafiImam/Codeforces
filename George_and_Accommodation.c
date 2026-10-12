#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int r[n][2], i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &r[i][j]);
        }
    }
    int count=0;
    for(i=0; i<n; i++)
    {
        int p, q;
        p = r[i][0];
        q = r[i][1];
        if(q - p >= 2)
        {
            count++;
        }
    }
    printf("%d\n", count);
}