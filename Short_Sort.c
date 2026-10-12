#include<stdio.h>
int main()
{
    int n;
    char r[4], i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%s", r);
        if((r[0]=='a' && r[1]=='b' && r[2]=='c') || (r[0]=='a' && r[1]=='c' && r[2]=='b') || (r[0]=='c' && r[1]=='b' && r[2]=='a') || (r[0]=='b' && r[1]=='a' && r[2]=='c'))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}