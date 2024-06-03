#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(){
    int ControlVehiculos[24][31][12]; //Hora, dia, mes

    for (int i = 0; i < 24; i++)
    {
        for (int j = 0; j < 31; j++)
        {
            for (int z = 0; z < 12; z++)
            {
                ControlVehiculos[i][j][z] = rand() %10;
            }
            
        }
        
    }
    cout<<"\n __________________________________________________\n";
    for (int q = 0; q < 24; q++)
    {
        for (int w = 0; w < 31; w++)
        {
            for (int e = 0; e < 12; e++)
            {
                cout<< ControlVehiculos[q] << " - " <<endl;
            }
            
        }
        
    }
    
    

    cout<<"\nLa cantidad de vehiculos transitados en fecha 13 de junio a las 5:00 a. m. fueron:  " << ControlVehiculos[5][12][05] << endl;
    return 0;
}