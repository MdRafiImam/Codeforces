#include<iostream>
using namespace std;

int main()
{
    int n, i, len;
    string s;

    cin>> n;

    for(i=0; i<n; i++)
    {
        cin>> s;
        len = s.size();

        /*if(len % 2 != 0)
        {
            int p = len % 10;
            s[p] = s[p];
        }*/

        for(int j=0; j+1<len; j+=2)
        {
            swap(s[j], s[j+1]);
        }
        cout<< s << endl;
    }
}