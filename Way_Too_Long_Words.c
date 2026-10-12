#include<stdio.h>
#include<string.h>
int main()
{
    int n, i;
    char r[100];
    scanf("%d", &n);
    getchar();
    for(i=0; i<n; i++)
    {
        gets(r);
        long int l;
        l = strlen(r);

        if(l<11)
        {
            puts(r);
        }
        else
        {
            printf("%c%d%c\n", r[0], l-2, r[l-1]);
        }
    }

}