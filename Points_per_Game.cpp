#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int p, g;
    double ans;
    cin>> p >> g;

    ans = (double)p / g;

    cout<< fixed << setprecision(15) << ans << endl;
}