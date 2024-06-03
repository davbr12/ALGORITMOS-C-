#include <iostream>
#include <stdlib.h>
#include <stdio.h> 
#include <math.h> 

using namespace std;

int main()
{
    double p0, p1,p2, TOL, it, p, fp0,fp1,fp2, fp, q0,q1,q;
    int i = 1;
    cout <<"------METODO DE REGLA FALSA------\n";
    //cout <<"Ingrese cantidad de iteraciones: ";
    //cin >>it;
    cout <<"Ingrese el valor Po: ";
    cin >>p0;
    cout <<"Ingrese el valor P1: ";
    cin >>p1;
    cout <<"Ingrese la TOLERANCIA: ";
    cin >>TOL;
    /*1. f(x) = x3 – 2x2 – 5 = 0;
    fp0 = pow(p0,3) - (2*pow(p0,2)) - 5;
    fp1 = pow(p1,3) - (2*pow(p1,2)) - 5;
    2. f(x) = x – cos(x) = 0;
    fp0 = p0 - cos(p0);
    fp1 = p1 - cos(p1);*/
    //3. f(x) = x3 + 3x2 – 1 = 0;
    //4. f(x) = x – 0.8 – 0.2sen(x) = 0;
    
    fp0 = p0 - 0.8 - (0.2*sin(p0));
    fp1 = p1 - 0.8 - (0.2*sin(p1));
    q0 = fp0;
    q1 = fp1;
    cout <<"VALOR f(x0): ";
    cout <<q0<<"\n";
    cout <<"VALOR f(x1): ";
    cout <<q1<<"\n";
    while (i<100){
        p = p1 - (q1*((p1-p0)/(q1-q0)));
        if(abs(p-p1)<TOL){
            cout<<"EL VALOR DE LA RAIZ ES: ";
            cout<<p<<"\n";
            i=100;
        }
        i=i+1;
        fp = p - 0.8 - (0.2*sin(p));
        q= fp;
        if((q*q1)<0){
            p0 = p1;
            q0 = q1;
        }
        p1 = p;
        q1 = q;
    }
    
}


