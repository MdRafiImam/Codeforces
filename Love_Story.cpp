#include<iostream>
using namespace std;
int main()
{
    int t, i, j;
    cin>> t;
    char s[11], cd[11]="codeforces";
    for(i=0; i<t; i++)
    {
        cin>> s;
        int count=0;
        for(j=0; j<10; j++)
        {
            if(cd[j]!=s[j])
            {
                count++;
            }
        }
        cout<< count << endl;
    }
}