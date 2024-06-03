// Online C++ compiler to run C++ program online
#include <iostream>
#include <stdlib.h>
#include <stdio.h> 
#include <math.h> 

using namespace std;

int main() {
    int i, j, n;
    float x[101], y[101], xInterpol, yInterpol = 0;
    float productosNum, productosDem;
    
    cout<<"-- METODO DE INTERPOLACION DE LAGRANGE --\n";
    cout<<"INGRESE CANTIDAD DE PUNTOS: \n";
    cin>>n;
    cout<<"\n INGRESE VALORES DE X - Y: \n";
    cout<<"_________________________________\n";
    for(i=1; i<= n; i++){
        cout<<i<<". Valor X = ";
        cin>>x[i];
        cout<<i<<". Valor Y = ";
        cin>>y[i];
    }
    do{
        cout<<"Valor de x a evaluar: ";
        cin>>xInterpol;
    }while(xInterpol < x[1] || xInterpol > x[n]);
    
    for(i=1; i<=n; i++){
        productosNum=1;
        productosDem=1;
        for(j=1; j<=n; j++){
            if(i != j){
                productosNum = productosNum*(xInterpol-x[j]);
                productosDem = productosDem*(x[i]-x[j]);
            }
        }
        yInterpol = yInterpol + (productosNum/productosDem)*y[i];
    }
    cout<<"LA RESPUESTA INTERPOLADA ES: ";
    cout<<yInterpol;
    
    
}