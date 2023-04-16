# Lectura100NumMediaPosNega 5.8

#include <iostream>
using namespace std;

int main() {
    
    
    float numeros[100];   // Arreglo para almacenar los números
    float suma_positivos = 0, suma_negativos = 0;  // Acumuladores para la suma de positivos y negativos
    int contador_positivos = 0, contador_negativos = 0;  // Contadores para el número de positivos y negativos
    
    // Pidiendo al usuario que ingrese los números y almacenándolos en el arreglo
    for (int i = 0; i < 100; i++) {
        cout << "Ingrese el número " << i+1 << ": ";
        cin >> numeros[i];
    }
    
    // Calculando la suma de los números positivos y el número de positivos
    for (int i = 0; i < 100; i++) {
        if (numeros[i] > 0) {

            suma_positivos += numeros[i];
            contador_positivos++;
        }
    }
    
    // Calculando la suma de los números negativos y el número de negativos
    for (int i = 0; i < 100; i++) {
        if (numeros[i] < 0) {
            suma_negativos += numeros[i];
            contador_negativos++;
        }
    }
    
    // Calculando la media de los números positivos
    float media_positivos = 0;
    if (contador_positivos != 0) {
        media_positivos = suma_positivos / contador_positivos;
    }
    
    // Calculando la media de los números negativos
    float media_negativos = 0;
    if (contador_negativos != 0) {
        media_negativos = suma_negativos / contador_negativos;
    }
    
    // Imprimiendo el resultado
    cout << "La media de los números positivos es: " << media_positivos << endl;
    cout << "La media de los números negativos es: " << media_negativos << endl;
    
    return 0;
}
