#include<iostream>
using namespace std;

int main()
{
    int n, a, last;
    cin>> n;
    

    for(; last = n % 10; last--)
    {
        a = n / 10;
        if(last == 7)
        {
            cout<< "YES" << endl;
            return 0;
        }
        else
        {
            cout<< "NO" << endl;
            return 0;
        }
    }
    /*while(last = n % 10)
    {
        if(last == 7)
        {
            cout<< "YES" << endl;
            return 0;
        }
        a = n / 10;
        last--;
    }*/
    //cout<< "NO" << endl;
}