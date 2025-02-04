//https://github.com/nayito5/pan_queso
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaVector(int v[], int n) {
    srand(time(NULL)); 
    for (int i = 0; i < n; i++) {
        //v[i] = rand() % 20 + 1;
        cin >> v[i]; 
    }
}

int ordenaBurbujaV1(int v[], int n) {
    int aux, contador = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            contador++;
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    return contador;
}

int ordenaBurbujaV2(int v[], int n) {
    int mejora = 1;
    int aux, contador = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - mejora; j++) {
            contador++;
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
        mejora++;
    }
    return contador;
}

int ordenaBurbujaV3(int v[], int n) {
    int mejora = 1;
    bool cambio = true;
    int aux, contador = 0;
    for (int i = 0; i < n && cambio; i++) {
        cambio = false;
        for (int j = 0; j < n - mejora; j++) {
            contador++;
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                cambio = true;
            }
        }
        mejora++;
    }
    return contador;
}

void muestraVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}


void determinaMasOptima(int c1, int c2, int c3) {
    cout << "\nComparaciones:\n";
    cout << "Burbuja V1: " << c1 << endl;
    cout << "Burbuja V2: " << c2 << endl;
    cout << "Burbuja V3: " << c3 << endl;

    int minima = min(c1, min(c2, c3));

    cout << "La versión más óptima es: ";
    if (minima == c1) {
        cout << "Burbuja V1" << endl;
    } else if (minima == c2) {
        cout << "Burbuja V2" << endl;
    } else {
        cout << "Burbuja V3" << endl;
    }
}

int main() {
    int ne;
    cout << "Numero de elementos: ";
    cin >> ne;
    int vec[ne];
    llenaVector(vec, ne);

    cout << "Vector original: ";
    muestraVector(vec, ne);
    int c1 = ordenaBurbujaV1(vec, ne);
    llenaVector(vec, ne);
    int c2 = ordenaBurbujaV2(vec, ne);
    llenaVector(vec, ne);
    int c3 = ordenaBurbujaV3(vec, ne);
    determinaMasOptima(c1, c2, c3);

    cout << "\nVector ordenado: ";
    muestraVector(vec, ne);

    return 0;
}
