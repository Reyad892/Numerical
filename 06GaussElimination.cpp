#include <iostream> 
using namespace std; 
int main() { 

int n; 
float A[20][20], x[10], c, sum; 

cout << "Enter the order of the matrix: "; 

cin >> n; 
cout << "Enter the elements of the augmented matrix row-wise:\n"; 

for (int i = 0; i < n; i++) { 

for (int j = 0; j <= n; j++) { 

cout << "A[" << i << "][" << j << "]: "; 

cin >> A[i][j]; 

} 

} 

for (int j = 0; j < n; j++) { 

for (int i = j + 1; i < n; i++) { 

c = A[i][j] / A[j][j]; 

for (int k = 0; k <= n; k++) { 

A[i][k] = A[i][k] - c * A[j][k]; 

} 

} 

} 

x[n - 1] = A[n - 1][n] / A[n - 1][n - 1]; 

for (int i = n - 2; i >= 0; i--) { 

sum = 0; 

for (int j = i + 1; j < n; j++) { 

sum += A[i][j] * x[j]; 

} 

x[i] = (A[i][n] - sum) / A[i][i]; 

} 

cout << "\nThe solution is:\n"; 

for (int i = 0; i < n; i++) { 

cout << "x" << i + 1 << " = " << x[i] << endl; 

} 

return 0; 

} 