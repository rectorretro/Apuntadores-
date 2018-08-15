#include <iostream>
using namespace std;

    int arreglo[]={1,2,3,4,5,6,7,8,9,10};
    int *puntero;
    int sumador, promedio;
int main(){
    puntero = &arreglo[0];
    for(int i=0; i<10; i++){
        cout << "Valor " << arreglo[i] << endl;
        sumador=sumador+*puntero++;
    }
    promedio = sumador/10;
    cout << "Suma:" << sumador <<endl;
    cout << "Promedio: " << promedio;

    return 0;
}
