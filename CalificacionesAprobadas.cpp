#include <iostream>
using namespace std;

int main() {
    int num_alumnos, calificacion;
    int aprobados = 0;
    
    cout << "Ingrese el número de alumnos: ";
    cin >> num_alumnos;
    
    for (int i = 1; i <= num_alumnos; i++) {
        cout << "Ingrese la calificación del alumno " << i << ": ";
        cin >> calificacion;
        if (calificacion >= 60) {
            aprobados++;
        }
    }
    
    cout << "El número total de alumnos aprobados es: " << aprobados << endl;
    
    return 0;

}
