#include<stdio.h>
int main()
{
    int t, i;
    char s[6];
    scanf("%d", &t);
    getchar();
    for(i=0; i<t; i++)
    {
        gets(s);
        int Ac=0, Bc=0, n;
        for(n=0; n<5; n++)
        {
            if(s[n]=='A')
            {
                Ac++;
            }
            else
            {
                Bc++;
            }
        }
        char ch;
        ch = (Ac>Bc) ? 'A' : ('B');
        printf("%c\n", ch);
        /*if(Ac>Bc)
        {
            printf("A\n");
        }
        else
        {
            printf("B\n");
        }*/
    }
}