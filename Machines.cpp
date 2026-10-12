#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        double A, B;
        cin >> A >> B;
        double mechanicalAdvantage = A / B;
        cout << fixed << setprecision(16) << mechanicalAdvantage << endl;
    }

    return 0;
}