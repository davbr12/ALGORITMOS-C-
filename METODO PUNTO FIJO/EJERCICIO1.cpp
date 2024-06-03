#include <iostream>
#include <stdlib.h>
#include <stdio.h> 
#include <math.h> 

using namespace std;

int main()
{
    double  x,VAL1,VAL2,VAL3,NEWVAL,VALORANT, TOL, ERROR;
    int N,OK = 1;
    cout<<"BIENVENIDOS AL METODO DE PUNTO FIJO \n";
    cout<<"Ingrese P0: \n";
    cin>>x;
    cout<<"Ingrese TOLERANCIA: \n";
    cin>>TOL;
    VALORANT = x;
    cout<<"g(x) = ";
    
        for (int i = 0; i<= 1000; i ++)
        {
            VAL1 = 3-pow(x,2);
            VAL2 = VAL1/3;
            VAL3 = sqrt(VAL2);
            NEWVAL = VAL3;
            ERROR = abs((NEWVAL-x)/NEWVAL);
            x = NEWVAL;
            if(ERROR<TOL){
                i=1000;
                cout<<"APROXIMACION SOLUCION A LA RAIZ: ";
                cout<<NEWVAL<<endl;
            }
        }
}
