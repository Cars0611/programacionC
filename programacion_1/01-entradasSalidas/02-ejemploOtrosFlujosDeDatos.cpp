/*Este programa muestra otras funciones incluidas en <iostream>
 -cerr : el cual mmuestra un error instantaneo, generalmente cuando son criticos
 -clog : acumula en el bufer, y se vacia automaticamente.
 -endl : indica el fin de una linea*/
#include <iostream>
using namespace std;
int main() {
    cerr << "Error inmediato (sin búfer)" << std::endl;
    clog << "Error almacenado (con búfer, se vacía al final o con flush)" << std::endl;
    return 0;
}