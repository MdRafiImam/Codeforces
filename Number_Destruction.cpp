#include<iostream>
using namespace std;

int main()
{
    int n, count=0;
    cin>> n;

    for(int i=1; count<n; i++)
    {
        if(i % 3 != 0)
        {
            cout<< i << endl;
            count++;
        }
    }
}