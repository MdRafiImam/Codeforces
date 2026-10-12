#include<iostream>
using namespace std;

int main()
{
    string s;
    int len, count=0;
    cin>> s;

    len = s.size();

    for(int i=0; i<len; i++)
    {
        if(s[i] == 'o')
        {
            count++;
        }
    }
    cout<< count << endl;
}