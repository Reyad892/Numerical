#include <iostream>
#include <cmath>
using namespace std;
double f(double x)
{
    return x * x * x - x - 11;
}
void bisection(double a, double b, double tol = 0.001)
{
    if (f(a) * f(b) >= 0)
    {
        cout << "Invalid interval: f(a) and f(b) must have opposite signs.\n";
        return;
    }
    double c;
    while ((b - a) >= tol)
    {
        c = (a + b) / 2;
        if (fabs(f(c)) < tol)
            break;
        (f(c) * f(a) < 0) ? b = c : a = c;
    }
    cout << "Approximate Root: " << c << endl;
}
int main()
{
    cout << "NAME : Fakir Reyad Hossain\n";
    cout << "ID : 11230321428\n";
    bisection(2, 3);
    return 0;
}