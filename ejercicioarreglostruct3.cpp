#include <iostream>
#include <cstdlib>
using namespace std;

void arraya3();

void arraya3(){
     int l = 0;
    cout << "De cuantas palabras es tu lista? ";
    cin >> l;
    cin.ignore();

    // Declaramos la matriz con tamaño l por 20
    char c[l][20];

    // Limpiamos la pantalla antes de empezar
    system("cls");

    // Pedimos al usuario los valores para cada fila
    for (int i = 0; i < l; i++)
    {
        cout << i + 1 << ": ";
        cin.getline(c[i], 20);
    }

    // Limpiamos la pantalla de nuevo antes de imprimir los valores
    system("cls");

    // Imprimimos los valores almacenados
    for (int i = 0; i < l; i++)
    {
        cout << "Palabra " << i + 1 << ": " << c[i] << endl;
    }



}

