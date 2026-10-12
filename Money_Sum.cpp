#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;

    int m[n], i, sum=0;
    for(i=0; i<n; i++)
    {
        cin>> m[i];
        sum = sum + m[i];
    }
    cout<< sum << endl;
}