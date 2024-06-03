#include <iostream>
#include <stdlib.h>
#include <stdio.h> 
#include <math.h> 

using namespace std;

int main()
{
    double p0, p1, TOL, it, q0, q1, p, fp0,fp1,fp2, fp;
    int i;
    
    cout <<"------METODO DE LA SECANTE------\n";
    //cout <<"Ingrese cantidad de iteraciones: ";
    //cin >>it;
    cout <<"Ingrese el valor Po: ";
    cin >>p0;
    cout <<"Ingrese el valor P1: ";
    cin >>p1;
    cout <<"Ingrese la TOLERANCIA: ";
    cin >>TOL;
    
    fp0 = log(pow(p0,2) + 1) - exp(0.4*p0)*cos(M_PI*p0);
    fp1 = log(pow(p1,2) + 1) - exp(0.4*p1)*cos(M_PI*p1);
    q0 = fp0;
    q1 = fp1;
    
    cout <<"VALOR p0: ";
    cout <<fp0<<"\n";
    
    cout <<"VALOR p1: ";
    cout <<fp1<<"\n";
    
    while (i<100){
        p = p1 - (q1*((p1-p0)/(q1-q0)));
        if (abs(p-p1)<=TOL){
            cout <<"El valor de la raiz es: ";
            cout << p;
            i = 100;
        }else{
            i = i + 1;
            p0 = p1;
            q0 = q1;
            p1 = p;
            fp2 = log(pow(p,2) + 1) - exp(0.4*p)*cos(M_PI*p);
            q1 = fp2;
        }
    }
    
}


