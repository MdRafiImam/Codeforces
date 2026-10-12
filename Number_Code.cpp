#include<iostream>
using namespace std;

int main()
{
    int T, i;
    cin>> T;
    cin.ignore();

    string s;
    char num[] = {'0', '1', '3', '4', '5', '7'};
    char ch[] = {'o', 'i', 'e', 'a', 's', 't'};

    int len;
    for(int x=0; x<T; x++)
    {
        getline(cin, s);

        len = s.size();

        for(int i=0; i<len; i++)
        {
            for(int j=0; j<6; j++)
            {
                if(s[i] == num[j])
                {
                    s[i] = ch[j];
                }
            }
        }
        cout<< s << endl;
    }
}