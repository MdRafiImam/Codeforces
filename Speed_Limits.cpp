#include<iostream>
using namespace std;

int main()
{
    int s;
    cin>> s;

    string state[s+1];
    int speed[s+1];

    for(int i=0; i<s; i++)
    {
        cin>> state[i] >> speed[i];
    }

    int s1;
    cin>> s1;

    string state1[s1+1];
    
    for(int j=0; j<s1; j++)
    {
        cin>> state1[j];
    }

    for(int j=0; j<s1; j++)
    {
        for(int i=0; i<s; i++)
        {
            if(state1[j] == state[i])
            {
                cout<< speed[i] << endl;
            }
        }
    }
}