#include<iostream>
using namespace std;

int main()
{
    int p, q, r;
    cin>> p >> q >> r;

    if(p < q && q < r)
    {
        cout<< "SORTED" << endl;
    }
    else
    {
        cout<< "UNSORTED" << endl;
    }
}