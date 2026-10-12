#include<iostream>
using namespace std;

int main()
{
    int n, count=0;
    cin>> n;

    int input[n];

    bool seen[10] = {false};

    for(int i=0; i<n; i++)
    {
        cin>> input[i];
        int digit = input[i];

        if(!seen[digit])
        {
            count++;
        }
        seen[digit] = true;
    }
    cout<< count << endl;
      
}