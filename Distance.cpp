#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int X, Y, x, y;
    double N;

    cin>> X >> Y >> x >> y;

    N = sqrtl(powl((x-X),2) + powl((y-Y),2));
    if(N == 0)
    {
        cout<< fixed << setprecision(1) << N << endl;
    }
    else
    {
        cout<< fixed << setprecision(16) << N << endl;
    }
}