#include <iostream>
#include <stdlib.h>
#include <stdio.h> 
#include <math.h> 

using namespace std;

int main()
{
    double  x,VAL1,VAL2,VAL3,NEWVAL, VALORANT, TOL, ERROR;
    int N,OK = 1;
    cout<<"BIENVENIDOS AL METODO DE NEWTON RAPHSON \n";
    cout<<"Ingrese P0: \n";
    cin>>x;
    VALORANT = x;
    
        for (int i = 0; i<= 10; i ++)
        {
            VAL1 = pow(2,x)-6*cos(x);
            VAL2 = 6*sin(x) + log(2) * pow(2,x);
            VAL3 = x-VAL1/VAL2;
            NEWVAL = VAL3;
            x = NEWVAL;
            if(VAL1==0){
              i=1000;
                cout<<"APROXIMACION SOLUCION A LA RAIZ: ";
                cout.precision(10);
                cout<<VAL3<<endl;
            }
            cout<<i;cout<<" // ";
            cout<<VAL1; cout<<" / ";
            cout<<VAL2; cout<<" / ";
            cout<<VAL3<<endl;
        }
}
