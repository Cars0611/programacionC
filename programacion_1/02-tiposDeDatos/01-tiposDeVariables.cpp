#include<iostream>
using namespace std;

int main() {
    /* ====================================================================
       DOCUMENTACIÓN COMPLETA DE TIPOS DE VARIABLES EN C++
       ==================================================================== */

    // -------------------- TIPOS PRIMITIVOS (FUNDAMENTALES) --------------------

    // int: entero con signo. Tamaño típico: 4 bytes. Rango: -2.147.483.648 a 2.147.483.647.
    int numeroEntero = 0;

    // float: punto flotante de precisión simple. Tamaño típico: 4 bytes.
    // Rango: ±1.2e-38 a ±3.4e+38. Precisión: ~7 dígitos decimales.
    float numeroFlotante;

    // double: punto flotante de doble precisión. Tamaño típico: 8 bytes.
    // Rango: ±2.2e-308 a ±1.8e+308. Precisión: ~15 dígitos decimales.
    double numeroFoltante2;

    // char: carácter o entero pequeño. Tamaño: 1 byte (8 bits).
    // Puede ser signed (rango -128 a 127) o unsigned (0 a 255) según el compilador.
    char caracter;

    // bool: valor booleano. Tamaño: 1 byte. Solo dos valores: true (1) o false (0).
    bool numeroBooleano;

    // -------------------- MODIFICADORES DE TIPO (para int y char) --------------------

    // short int (o simplemente short): entero corto. Tamaño típico: 2 bytes.
    // Rango (signed): -32.768 a 32.767. Útil para ahorrar memoria.
    short int numero1;

    // long int (o long): entero largo. Tamaño: 4 bytes en Windows 64 bits,
    // 8 bytes en Linux/macOS 64 bits. Mínimo estándar: 4 bytes.
    long int numero2;

    // long long int (o long long): entero muy largo. Tamaño: 8 bytes fijo.
    // Rango (signed): -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807.
    long long numero3;

    // unsigned long: igual que long pero solo valores no negativos.
    // Si long ocupa 4 bytes, rango 0 a 4.294.967.295. Si ocupa 8 bytes, rango 0 a 18.446.744.073.709.551.615.
    unsigned long numero4;

    // unsigned char: carácter sin signo. Tamaño: 1 byte. Rango: 0 a 255.
    // Ideal para valores de bytes (como datos binarios o caracteres extendidos).
    unsigned char numero5;

    // -------------------- TIPOS DERIVADOS (compuestos a partir de otros) --------------------

    // Arreglo (array): colección de elementos del mismo tipo, almacenados en posiciones contiguas.
    // El tamaño debe ser conocido en tiempo de compilación (excepto VLA en C, no estándar en C++).
    int arreglo[10];  // 10 elementos de tipo int, índices 0..9.

    // Puntero: almacena la dirección de memoria de otra variable.
    // Puede apuntar a una variable, a un arreglo, o a nullptr. Operadores: & (dirección), * (dereferencia).
    int* ptr;  // puntero a un entero (aún no inicializado).

    // Referencia: alias (nombre alternativo) de una variable existente.
    // Debe inicializarse al declararse y no puede cambiar de referente.
    int& ref = numeroEntero;  // ref es otro nombre para 'numeroEntero'.

    // Declaración de función: especifica tipo de retorno, nombre y parámetros.
    // En este caso solo es una declaración (no definición). La función no existe realmente.
    int suma(int a, int b);  // Toma dos ints, retorna un int.

    // -------------------- TIPOS DEFINIDOS POR EL USUARIO --------------------

    // struct: agrupa datos de tipos posiblemente diferentes.
    // Por defecto, todos los miembros son públicos (accesibles desde fuera).
    struct Punto {
        int x;  // coordenada X
        int y;  // coordenada Y
    };  // Nota: el punto y coma es obligatorio.

    // class: similar a struct, pero por defecto los miembros son privados.
    // Encapsula datos y funciones. Es la base de la programación orientada a objetos en C++.
    class Circulo {
    private:
        double radio;  // atributo privado, no accesible directamente desde main()
    public:
        void setRadio(double r) { radio = r; }  // método público para modificar radio
    };

    // union: varios miembros comparten la misma dirección de memoria.
    // Solo uno de los miembros puede estar "activo" a la vez. Su tamaño es el del miembro más grande.
    // Útil para ahorrar memoria o para interpretar los mismos bytes de diferentes formas.
    union Dato {
        int i;    // 4 bytes típicamente
        float f;  // 4 bytes típicamente
    };  // El tamaño de Dato será 4 bytes (el máximo entre i y f).

    // enum (enumeración clásica): define constantes enteras con nombre.
    // Los nombres (AZUL, AMARILLO, VERDE) se convierten implícitamente a int.
    // Puede causar conflictos si otro enum usa el mismo nombre.
    enum Color { AZUL, AMARILLO, VERDE };  // AZUL=0, AMARILLO=1, VERDE=2 por defecto.

    // enum class (C++11 en adelante): enumeración fuertemente tipada y con ámbito.
    // No hay conversión implícita a int. Más segura y recomendada.
    enum class Estado { Activo, Inactivo };  // Uso: Estado::Activo, Estado::Inactivo.

    // -------------------- DEDUCCIÓN DE TIPOS (C++11 en adelante) --------------------

    // auto: el compilador deduce el tipo de la variable a partir del inicializador.
    // Es muy útil para tipos largos o complejos (iteradores, expresiones lambda, etc.).
    auto x = 5.45;   // Como 5.45 es double, x se convierte en double.

    // decltype: examina el tipo de una expresión sin evaluarla.
    // Aquí 'numero1' es de tipo short int, por lo que 'y' también será short int.
    decltype(numero1) y = 32;   // y es short int, capacidad suficiente para 32.

    // Fin del programa.
    return 0;  // Buen práctica: indicar que el programa terminó correctamente.
}