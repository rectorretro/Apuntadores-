#include <iostream>
using namespace std;

    int numero = 12;
    int numero2 = 14;
    int *puntero;
    char a= 'b' ;
    float f = 1.23,*pflo;
    int arreglo[]={1,2,3,4,5};
    int *puntero2;
int main(){
    pflo = &f;
    puntero2 = &arreglo[3];
    puntero = &numero;
     cout << "Numero: " << puntero<<endl;
    cout <<"Memoria char: " << &a<<endl;
    cout << "Memora entero: " << &numero2<<endl;
    cout << "Memoria float: " << &f << endl;
    cout << "Valor float: " << f << endl;
    cout << "Arreglo direccion: "<< puntero2 << endl;
    cout << "Arreglo valor: " << *puntero2 << endl;
    cout << "Memoria de arreglo: " << puntero2 << endl;
    puntero2+=4;
    cout << "Arreglo valor 5: " << *puntero2 << endl;
    cout << "Memoria de valor 5: "<< puntero2;
    return 0;
}
