#include<stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        int n;
        char R[1000];
        scanf("%d", &n);
        scanf("%s", R);

        if(n!=5)
        {
            printf("No\n");
            continue;
        }

        int T=0, i=0, m=0, u=0, r=0, j;
        for(j=0; j<5; j++)
        {
            if(R[j]=='T')
            {
                T++;
            }
            else if(R[j]=='i')
            {
                i++;
            }
            else if(R[j]=='m')
            {
                m++;
            }
            else if(R[j]=='u')
            {
                u++;
            }
            else if(R[j]=='r')
            {
                r++;
            }
        }
        if(T==1 && i==1 && m==1 && u==1 && r==1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("NO\n");
            }
    }

}