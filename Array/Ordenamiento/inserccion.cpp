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
int ordenaInsercion (int v[], int n){
    int contador=0, aux, i, j ;
    for(i=1;i<n  ; i++){
        aux=v[i];
        j=i-1;
        while(j>=0) {
            contador++;
            if(aux< v[j])
            v[j+1]=v[j];
           
    
        }
         j--;
    }  
}
  
main(){
    int ne, comparaciones;
    cout << " Ingresa el numero de elementos del vector: ";
    cin >> ne;
    int vec[ne]; 
    llenaVector (vec, ne);
    cout<<"vestor origenal:\n";
    verVector (vec, ne);
    comparaciones =ordenaInsercion(vec, ne);
    cout<<"\n el numero de comparaciones =" <<comparaciones ;

 }