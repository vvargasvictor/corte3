#include "ejercicio7structfinal.cpp"
#include "ejercicio13tructanidadofinal.cpp"
#include "ejercicio15struct2final.cpp"
#include "ejercicioarreglostruct1.cpp"
#include "ejercicioarreglostruct2.cpp"
#include "ejercicioarreglostruct3.cpp"
#include <iostream>

using namespace std;




void menuArreglos();
void menuEstructuras();



int main()


 {
    
    int opcion;
    do {
        cout << "----- MENÚ PRINCIPAL -----" << endl;
        cout << "1. Arreglos" << endl;
        cout << "2. Estructuras" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;
        switch(opcion) {
            case 1:
                menuArreglos();
                cout<<"hola mundo";
                break;
            case 2:
                menuEstructuras();
                break;
            case 3:
                cout << "¡Hasta luego!" << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }
    } while(opcion != 3);

    return 0;
}

void menuArreglos() {
     int opcion;
    do {
        cout << "----- MENÚ DE ESTRUCTURAS -----" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cout << "4. Volver al menú principal" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;
        switch(opcion) {
            case 1:
            arraya1();
                
                break;
            case 2:
            arraya2();
                
                break;
            case 3:
            arraya3();
                
                break;
            case 4:
                cout << "Volviendo al menú principal..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }
    } while(opcion != 4);
}

void menuEstructuras() {
    int opcion;
    do {
        cout << "----- MENÚ DE ESTRUCTURAS -----" << endl;
        cout << "1. Ejercicio 1" << endl;
        cout << "2. Ejercicio 2" << endl;
        cout << "3. Ejercicio 3" << endl;
        cout << "4. Volver al menú principal" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;
        switch(opcion) {
            case 1:
            structnumero1();
                
                break;
            case 2:
            structnumero2();
                
                break;
            case 3:
            structnumero3();
                
                break;
            case 4:
                cout << "Volviendo al menú principal..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }
    } while(opcion != 4);
    
}

