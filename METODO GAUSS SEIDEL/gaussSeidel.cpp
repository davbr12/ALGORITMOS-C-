#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool Diagonalmente_dominante(const vector<vector<double>>& A) {
int n = A.size();
for (int i = 0; i < n; i++) {
double Elemento_en_diagonal = abs(A[i][i]);
double sum = 0.0;
for (int j = 0; j < n; j++) {
if (j != i) {
sum += abs(A[i][j]);
}
}
if (Elemento_en_diagonal <= sum) {
return false;
}
}
return true;
}
vector<double> gaussSeidel(const vector<vector<double>>& A, const vector<double>& b, vector<double>
X0, double tol, int maxIteraciones) {
if (!Diagonalmente_dominante(A)) {
cout << "La matriz A no es diagonalmente dominante." << endl;
return vector<double>();
}
int n = A.size();
vector<double> X = X0;
for (int k = 1; k <= maxIteraciones; k++) {
for (int i = 0; i < n; i++) {
double sum1 = 0.0;
double sum2 = 0.0;
for (int j = 0; j < i; j++) {
sum1 += A[i][j] * X[j];
}
for (int j = i + 1; j < n; j++) {
sum2 += A[i][j] * X0[j];

}
X[i] = (b[i] - sum1 - sum2) / A[i][i];
if (abs(X[i] - X0[i]) < tol) {
return X;
}
}
X0 = X;
}
cout << "Se excedio la cantidad maxima de iteraciones." << endl;
return vector<double
}
int main() {
int n;
cout << "Ingrese la cantidad de ecuaciones e incognitas (n): ";
cin >> n;
vector<vector<double>> A(n, vector<double>(n));
cout << "Ingrese los elementos de la matriz A:" << endl;
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
cin >> A[i][j];
}
}
vector<double> b(n);
cout << "Ingrese los elementos del vector b:" << endl;
for (int i = 0; i < n; i++) {
cin >> b[i];
}
vector<double> X0(n);
cout << "Ingrese los elementos del vector X0 (aproximacion inicial):" << endl;
for (int i = 0; i < n; i++) {
cin >> X0[i];
}
double tol;
cout << "Ingrese la tolerancia: ";
cin >> tol;
int maxIteraciones;
cout << "Ingrese la cantidad maxima de iteraciones: ";
cin >> maxIteraciones;
vector<double> solucion = gaussSeidel(A, b, X0, tol, maxIteraciones);
if (!solucion.empty()) {
cout << "La solucion aproximada es:" << endl;
for (int i = 0; i < n; i++) {
cout << "X" << i + 1 << " = " << solucion[i] << endl;
}
} else {
cout << "Procedimiento terminado sin exito." << endl;
}
return 0;
}