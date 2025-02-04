#include <iostream>
#include <cctype> 

using namespace std;

const char* clasificarCadena(const char* str) {
    bool esNumerica = true;
    bool esAlfanumerica = true;
    bool esAlfabetica = true;

    for (int i = 0; str[i] != '\0'; i++) {
        
        if (!isdigit(str[i])) {
            esNumerica = false;
        }
        
        
        if (!isalpha(str[i])) {
            esAlfabetica = false;
        }
        
        
        if (!isalnum(str[i])) {
            esAlfanumerica = false;
        }
    }

    // Devolver el tipo de la cadena
    if (esNumerica) {
        return "Numérica";
    } else if (esAlfanumerica) {
        return "Alfanumérica";
    } else if (esAlfabetica) {
        return "Alfabética";
    } else {
        return "Otra categoría";
    }
}

int main() {
    const char* cadena1 = "12345";
    const char* cadena2 = "abc123";
    const char* cadena3 = "abcdef";
    

    cout << "Cadena 1: " << cadena1 << " -> " << clasificarCadena(cadena1) << endl;
    cout << "Cadena 2: " << cadena2 << " -> " << clasificarCadena(cadena2) << endl;
    cout << "Cadena 3: " << cadena3 << " -> " << clasificarCadena(cadena3) << endl;
   

    return 0;
}
