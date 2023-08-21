#include <iostream>

using namespace std;

int main(){
    string nombre = "Juan";
    int edad = 25;
    int edad_siguiente;
    edad_siguiente = edad + 1;

    cout << "Me llamo " << nombre << " tengo " << edad << " años." << endl;
    cout << "El año que tendrá " << edad_siguiente << " años." << endl;

    edad = edad + 1;
    cout << "El año que tendrá " << edad << " años" << endl;

    return 0;

}