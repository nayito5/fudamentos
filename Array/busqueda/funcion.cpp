#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void llenaVector (int v[], int n){
    srand(time(NULL)); 
    for (int i=0; i<n; i++){
        v[i] = rand() % 10 + 1;
        cin >> v[i];
    }
}

void ordenarElementos(int v[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

void verDato (int v[], int n){
    for (int i=0; i<n; i++){
        cout << v[i] << "\t";
    }
}

bool isBinario (int v[], int n, int elemento){


    
    
}

main ()
{
    int ne, dato;
    cout << "Numero de elemntos del array: ";
    cin >> ne;
    int vector[ne];
    verDato (vector,ne);
    cout << "Ingrese un numero para buscar: ";
    cin >> dato;
    ordenarElementos (vector, ne);
    (isBinario(vector,ne, dato))? cout<<"Dato Encontrado": cout<<"El dato no existe";

}