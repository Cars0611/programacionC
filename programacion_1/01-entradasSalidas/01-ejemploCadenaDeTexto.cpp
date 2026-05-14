//Este es un programa que me permite mostrar en pantalla una cadena de texto

#include<iostream>
#include<string> //libreria que me permite trabajar con cadenas de texto
using namespace std;
int main(){
    string texto;
    cout<<"Introduzca un mensaje: ";
    getline(cin, texto); // me permite leer una linea completa hasta el primer salto de linea
    cout<<texto;

    return 0;
}