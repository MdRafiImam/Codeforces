#include<iostream>
using namespace std;

int main()
{
    string name;
    cin>> name;

    bool seen[26] = {false};
    int count = 0;

    for(int i=0; i<name.length(); i++)
    {
        char ch = name[i];
        int index = ch - 'a';

        if(!seen[index])
        {
            count++;
        }
        seen[index] = true;
    }

    if(count % 2 == 0)
    {
        cout<< "CHAT WITH HER!" << endl;
    }
    else
    {
        cout<< "IGNORE HIM!" << endl;
    }
}