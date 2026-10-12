#include<iostream>
using namespace std;

int main()
{
    int n, m, count=0;
    cin>> n >> m;

    char r[n][m], i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>> r[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(r[i][j] == 'x')
            {
                count++;
            }
        }
    }
    cout<< count << endl;
}