#include <iostream>
#include <cmath>
using namespace std;
double func(double x)
{
    return x * x * x - x - 11;
}
void regulaFalsi(double a, double b, int maxIter = 1000, double tol = 0.001)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "Invalid interval: f(a) and f(b) must have opposite signs.\n";
        return;
    }
    double c;
    for (int i = 0; i < maxIter; ++i)
    {
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));
        if (fabs(func(c)) < tol)
            break;
        (func(c) * func(a) < 0) ? b = c : a = c;
    }
    cout << "Approximate root: " << c << endl;
}
int main()
{
    cout << "NAME : Fakir Reyad Hossain\n";
    cout << "ID : 11230321428\n";

    regulaFalsi(2, 3);

    return 0;
}