#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int a = 15, b = 2;
    double q = 15, p = 2;
    cout << fixed << setprecision(2) << a / b << endl
            << q/p << endl
            << q/b << endl;

    double x, y, t, res;
    cin >> x >> y >> t;
    res = (exp(x) + y * sin(t)) / (t + x / y);
    cout << setprecision(6) << "res = " << res << endl;
    double z = abs(res-10);
    cout << z << endl;
    return 0;
}