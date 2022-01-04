#include <iostream> 
using std::cin; 
using std::cout; 
int main() 
{ 
 int a[2][2], b[2][2], c[2][2], i, j; 
 cout << "Enter values in A: \n"; 
 for (i = 0; i < 2; i++) 
 { 
 for (j = 0; j < 2; j++) 
 { 
 cin >> a[i][j]; 
 } 
 } 
 cout << "\nEnter values in B: \n"; 
 for (i = 0; i < 2; i++) 
 { 
 for (j = 0; j < 2; j++) 
 { 
 cin >> b[i][j]; 
 } 
 } 
 int p = (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]); 
 int q = (a[1][0] + a[1][1]) * b[0][0]; 
 int r = a[0][0] * (b[0][1] - b[1][1]); 
 int s = a[1][1] * (b[1][0] - b[0][0]); 
 int t = (a[0][0] + a[0][1]) * b[1][1]; 
 int u = (a[0][0] - a[1][0]) * (b[0][0] + b[0][1]); 
 int v = (a[0][1] - a[1][1]) * (b[1][0] + b[1][1]); 
 c[0][0] = p + s - t + v; 
 c[0][1] = r + t; 
 c[1][0] = q + s; 
 c[1][1] = p + r - q - u; 
 cout << "\nA x B = C, which has values: \n"; 
 for (i = 0; i < 2; i++) 
 { 
 for (j = 0; j < 2; j++) 
 { 
 cout << c[i][j] << " "; 
 } 
 cout << "\n"; 
 } 
 return 0; 
}
