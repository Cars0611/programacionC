/*Este programa nos permitira poner a prueba los diferentes tipos de variables,
y asi mismo evaluar los distintos resultados generados.*/

#include<iostream>
#include<string>
#include<limits>
using namespace std;
int main(){

    int numero1;
    float numero2;
    double division;
    char nombre;
    char apellido[10];
    bool estadoLaboral=true;
    string fraseRelevante;

    cout<<"Introduzca el primer numero: ";
    cin>>numero1;
    cout<<"Introduzca el segundo numero: ";
    cin>>numero2;

    cout<<"Introduzca tu primer nombre"<<endl;
    cin>>nombre;

    cout<<"Introduzca tu primer apellido"<<endl;
    cin>>apellido;

    cout<<"Introduzca una frase relevante: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');;// me permite limpiar el bufer,para usar la funcion getline
    getline(cin, fraseRelevante);

    division=numero1/numero2;
    
    cout<<"Numeró 1 = "<<numero1<<endl;
    cout<<"Numeró 2 = "<<numero2<<endl;
    cout<<"El resultado de dividir "<<numero1<<"/"<<numero2<<" es: "<<division<<endl;
    cout<<"¿Este es tu primer nombre? "<<nombre<<endl;
    cout<<"¿Este es tu primer apellido? "<<apellido<<endl;
    cout<<"Estado Laboral "<<estadoLaboral<<endl;

    estadoLaboral=false;
    
    cout<<"Estado Laboral "<<boolalpha<<estadoLaboral<<endl;
    cout<<"Esta es tu frase relevante: \n"<<fraseRelevante<<endl;

    return 0;
}

//Compila, Ejecuta y Analiza el porque de los resultados. 