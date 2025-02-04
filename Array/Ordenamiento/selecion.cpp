#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaVector (int v[], int n){
    srand(time(NULL)); // función semilla para generar numeros
    for (int i=0; i<n; i++){
        //cin >> v[i];
    }
}

void verVector (int v[], int n){
    for (int i=0; i<n; i++){
        cout << v[i] << "/t";
    }
}
int ordenaSelecion (int v[], int n){
    int contador=0, aux;
    bool cambios=true;
    for (int i=0; i<n-1 && cambios ; i++){
        for (int j=i+1; j<n; j++){
            contador ++;
            if (v[i]>v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                cambios = true;
            }
        }
    }
    return contador;
}
main(){
    int ne, comparaciones;
    cout << " Ingresa el numero de elementos del vector: ";
    cin >> ne;
    int vec[ne]; 
    llenaVector (vec, ne);
    cout<<"vestor origenal:\n";
    verVector (vec, ne);
    comparaciones =ordenaSelecion(vec, ne);
    cout<<"\n el numero de comparaciones =" <<comparaciones ;

 }