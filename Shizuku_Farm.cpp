#include<iostream>
using namespace std;

int main()
{
    int t, i;
    cin>> t;
    int count=0;
    for(i=0; i<t; i++)
    {
        int n;
        cin>> n;
        if(n % 2 == 1)
        {
            cout<< 0 << endl;
        }
        else
        {
            cout<< (n / 4) + 1 << endl;
        }
    }
}