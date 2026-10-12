#include<stdio.h>
int main()
{
    int n, i, X=0;
    scanf("%d", &n);
    char r[4];
    for(i=0; i<n; i++)
    {
        scanf("%s", r);
        if(r[1]=='+')
        {
            X++;
        }
        else
        {
            X--;
        }
    }
    printf("%d\n", X);
}