#include<iostream>
using namespace std;

int main()
{
    int q;
    cin>> q;

    for(int x=0; x<q; x++)
    {
        int n;
        cin>> n;

        char s[100], t[100];
        cin>> s >> t;

        int i;
        for(i=0; i<n; i++)
        {
            if(s[i] != t[i])
            {
                int j;
                for(j=i+1; j<n; j++)
                {
                    if(s[j] == t[i])
                    {
                        swap(s[i], s[j]);
                        break;
                    }
                }
                if(j == n)
                {
                    cout<< "NO" << endl;
                    break;
                }
            }
        }
        if(i == n)
        {
            cout<< "YES" << endl;
        }
    }
}