#include<iostream>
using namespace std;

int main()
{
    int n, m, count=0;
    cin>> n >> m;

    int *b = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>> b[i];
    }

    for(int i=0; i<n; i++)
    {
        if(b[i] >= m)
        count++;
    }
    cout<< count << endl;

    delete[] b;
}