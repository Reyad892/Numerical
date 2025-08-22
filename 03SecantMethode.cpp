#include <iostream>
#include <cmath>
using namespace std;

float f(float x)
{
    return x * x * x - x - 11;
}
void secant(float x1, float x2, float tol = 0.0001, int maxIter = 1000)
{
    float x0;
    int iter = 0;

    if (f(x1) * f(x2) >= 0)
    {
        cout << "No root found in given interval." << endl;
        return;
    }
    do
    {
        x0 = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
        x1 = x2;
        x2 = x0;
        iter++;
    } while (fabs(f(x0)) > tol && iter < maxIter);

    cout << "Root ≈ " << x0 << endl;
    cout << "Iterations: " << iter << endl;
}
int main()
{
    cout << "NAME : Fakir Reyad Hossain\n";
    cout << "ID : 11230321428\n";

    secant(2, 3);

    return 0;
}