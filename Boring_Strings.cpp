#include<iostream>
using namespace std;

int main()
{
    string s;
    int len;
    cin>> s;

    len = s.size();

    for(int i=0; i<len; i++)
    {
        if(s[i] != 'a' && s[i] != 'b')
        {
            cout<< "NO" << endl;
            return 0;
        }
    }
    cout<< "YES" << endl;
}