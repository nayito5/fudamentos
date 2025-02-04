#include<iostream>
using namespace std;
void cambiarString(string nombres){
    nombres = "Sin nombres";

}
void cambiarArray(char apellido[]){
    apellido[0] = 'S';
    apellido[1] = 'I';
    apellido[2] = 'N';
    apellido[3] = 'O';
    apellido[4] = 'S';
    apellido[5] = 'G';
    apellido[6] = 'W';
    apellido[7] = '\0';
    cout<<"ingresa el nuevo apellido:";
    cin.getline(apellido, 20);


     
}
main()
{
    string nombres, apodo;
    string curso[5]={"c++","java","python","c#","PHP"};
    char apellidos [20],apodo1[20];
    cout << "ingrese su nombre:";
    getline(cin,nombres);
    cout<<"su monbre es:"<<nombres<<endl;
    cambiarString(nombres);
    cout << "su nombre es luego de llamar a la funcion:"<<nombres<<endl;
    cout<<"ingrese su apellidos:";
    cin.getline(apellidos, 20);
    cout<< "su apellido es:"<< apellidos <<endl;
    cambiarArray(apellidos);
    cout << "su apellido es luego de llamar a la funcion:"<<apellidos<<endl;
    nombres=apodo;

}