#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cin>> n >> k;
    int l[n], i;

    for(i=0; i<n; i++)
    {
        cin>> l[i];
    }

    int count=0;
    for(i=0; i<n-1; i++)
    {
        if(l[i+1] - l[i] > k)
        {
            count++;
        }
    }
    if(count == 0)
    {
        cout<< "YES" << endl;
    }
    else
    {
        cout<< "NO" << endl;
    }
}