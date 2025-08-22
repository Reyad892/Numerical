#include <iostream>
using namespace std;
int main(){
    cout << "NAME : Fakir Reyad Hossain\n";
    cout << "ID : 11230321428\n";

    int n;
    float A[20][20], x[10], c;

    cout << "Enter the size of matrix: ";
    cin >> n;

    cout << "Enter the elements of augmented matrix row-wise:\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= n; j++)
        {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
    for (int j = 0; j < n; j++){
        for (int i = 0; i < n; i++)
        {
            if (i != j)
            {
                c = A[i][j] / A[j][j];
                for (int k = 0; k <= n; k++)
                {
                    A[i][k] -= c * A[j][k];
                }
            }
        }
    }
    cout << "\nThe solution is:\n";
    for (int i = 0; i < n; i++)
    {
        x[i] = A[i][n] / A[i][i];
        cout << "x" << i + 1 << " = " << x[i] << endl;
    }

    return 0;
}