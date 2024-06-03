#include <iostream>
#include <cmath>
void MetodoJacobi(double** A, double* b, double* x, int n, double tol, int max_iter) {
double* previo = new double[n];
for (int k = 1; k <= max_iter; k++) {
for (int i = 0; i < n; i++) {
double sum1 = 0.0;
double sum2 = 0.0;
for (int j = 0; j < i; j++) {
sum1 += A[i][j] * x[j];
}
for (int j = i + 1; j < n; j++) {
sum2 += A[i][j] * previo[j];
}
x[i] = (1 / A[i][i]) * (-sum1 - sum2 + b[i]);
}
bool convergencia = true;
for (int i = 0; i < n; i++) {
if (std::abs(x[i] - previo[i]) >= tol) {
convergencia = false;
break;
}
}
if (convergencia) {
std::cout << "Convergencia alcanzada en la iteración " << k << std::endl;
delete[] previo;
return;
}
for (int i = 0; i < n; i++) {
previo[i] = x[i];
}
}

std::cout << "Superada la cantidad maxima de iteraciones" << std::endl;
delete[] previo;
}
int main() {
int n;
std::cout << "Ingrese la cantidad de ecuaciones e incognitas n: ";
std::cin >> n;
double** A = new double*[n];
double* b = new double[n];
std::cout << "Ingrese los elementos de la matriz A:" << std::endl;
for (int i = 0; i < n; i++) {
A[i] = new double[n];
for (int j = 0; j < n; j++) {
std::cout << "A[" << i << "][" << j << "] = ";
std::cin >> A[i][j];
}
}
std::cout << "Ingrese los elementos del vector b:" << std::endl;
for (int i = 0; i < n; i++) {
std::cout << "b[" << i << "] = ";
std::cin >> b[i];
}
double* x0 = new double[n];
std::cout << "Ingrese las aproximaciones iniciales x0:" << std::endl;
for (int i = 0; i < n; i++) {
std::cout << "x0[" << i << "] = ";
std::cin >> x0[i];
}
double tol;
std::cout << "Ingrese la tolerancia TOL: ";
std::cin >> tol;
int max_iter;
std::cout << "Ingrese la cantidad maxima de iteraciones N: ";
std::cin >> max_iter;
double* xi = new double[n];
MetodoJacobi(A, b, x0, n, tol, max_iter);
std::cout << "Vector solución:" << std::endl;
for (int i = 0; i < n; i++) {
std::cout << "x[" << i << "] = " << x0[i] << std::endl;
}
for (int i = 0; i < n; i++) {
delete[] A[i];
}
delete[] A;
delete[] b;
delete[] x0;
delete[] xi;
return 0;
}