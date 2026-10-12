#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;

    int t[n], i, ans;
    for(i=0; i<n; i++)
    {
        cin>> t[i];
        ans = (t[i] - 2) * 180;
        cout<< ans << endl;
    }
}