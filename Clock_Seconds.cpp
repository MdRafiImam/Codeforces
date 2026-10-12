#include<iostream>
using namespace std;

int main()
{
    int h, m, s, T;
    cin>> h >> m >> s;

    string a;
    cin>> a;

    if(h != 0 && a == "PM")
    {
        h = 12 + h;
        T = (((h * 60) + m) * 60) + s;
    }
    else if(h != 0 && a == "AM")
    {
        T = (((h * 60) + m) * 60) + s;
    }
    else
    {
        T = (m * 60) + s;
    }

    cout<< T << endl;

}