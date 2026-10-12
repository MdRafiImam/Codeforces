#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;

    int t[n], p, ans=0;
    for(int i=0; i<n; i++)
    {
        cin>> t[i];
        p = 3 * t[i];
        ans = ans + p;
    }
    cout<< ans;
}