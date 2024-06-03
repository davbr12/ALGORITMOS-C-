#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cmath>
#include <vector>

using namespace std;
void MenuBienvenida();

int main(){
    
    string usuario = "admin", contrasena = "main";
    string looginUs, LoginPass;
    int contador = 1;
    bool validacion = false;

    
    do
    {
        system("clear");
        cout<<"\n_____________________\n";
        cout<<"Bienvenido a Market - Intento: ";
        cout<< contador;
        cout<<"\n_____________________\n";
        cout <<"\nIngrese usuario: \n";
        cin>> looginUs;
        cout <<"\nIngrese contraseña: \n";
        cin>> LoginPass;
        if (looginUs == usuario && LoginPass == contrasena){
            validacion = true; 
            MenuBienvenida();
        }else{
            cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            cout<<"\nUsuario o contraseña incorrecto \n";
            cout<<"\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
            contador++;
            getchar();
        }
    } while (validacion == false && contador < 4);

}

void MenuBienvenida() {
    int valor, n1,n2,n3,n4,n = 0;
    
    cout<<"\nBienvenido usuario\n";
    
    /*cout<<"\nIngrese cifra de 4 digitos\n";
    cin>>valor;
    n1 = valor % 10;
    n2 = (valor % 100)/10;
    n3 = (valor % 1000)/100;
    n4 = (valor / 1000);
    cout<< "Orden inverso: " << n1 <<" " << n2  <<" " << n3  <<" " << n4 <<"\n";*/
    cout<<"Ingrese cantidad de valores para el vector: "<< endl;
    cin>> n;

    vector<int> records (n);

    for (int i = 0; i < n; i++)
    {
        cout<<"Ingrese cantidad en posicion: "<< i+1 << endl; 
        cin>>records[i];
    }
    
    cout<<"Elementos almacenadoe en vector: "<<endl;

    for (int j = 0; j < records.size(); j++)
    {
        cout<<records[j]<<endl;
    }
    

    
}