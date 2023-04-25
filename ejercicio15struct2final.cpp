// Defina y declare una estructura para almacenar 
//la información de los
//datos académicos y personales de los estudiantes
// de la carrera de Ingeniería en
//Sistemas de Información de la Universidad Centroamericana (UCA)
//. Solicite los datos
//al usuario, utilice el ciclo apropiado para imprimir en pantalla 
//la información
//almacenada y recuerde utilizar las funciones de E/S 
//con el formato adecuado

#include <stdio.h>
#include <string.h> // strncpy
#include <iostream> 
using namespace std ;

#define MAXIMA_LONGITUD_CADENA_ 5
#define CANTIDAD_DISPOSITIVOS 100

void structnumero2();

struct estudiante
{
    char nombre[MAXIMA_LONGITUD_CADENA_];
   
    double edad ;
    string rama ;
    double id ;
    double semestre ;
    
    
};

struct estudiante dispositivoss [CANTIDAD_DISPOSITIVOS];


void structnumero2()
{
  int cantdis=0  , cantidadtotalcpp=0 ;
    // Asignar datos
    for (int d = 0 ; d < CANTIDAD_DISPOSITIVOS ; d++)
    {
        cout << " --- --- " << endl ;

     cout << "digite el nombre del estudiante " << endl ;

       cin >> dispositivoss[d].nombre ;
       cout << " --- --- " << endl ;

        cout << "desea seguir incluyendo mas estudiate ? " << endl ;
        cin >> cantdis ;

         
         cantidadtotalcpp++;

        if(cantdis==0)
        {
            d=d+100;


        }

    }
    cout << endl <<  cantdis << endl ;

system("cls"); //Borra la pantalla.

    for (int o = 0 ; o < MAXIMA_LONGITUD_CADENA_ ; o++)


{
      
       cout << endl << dispositivoss[o].nombre << endl ;
       
       cout << endl << "digite la rama del estudiante " << endl ;
       cin >> dispositivoss[o].rama ;

       cout <<endl<< "digite la edad del estudiante " << endl ;
       cin >> dispositivoss[o].edad ;
       cout << endl << "digite el codigo de usuario" << endl;
       cin >> dispositivoss[o].id ;

       cout << endl<< "digite el semestre que lleva el usuario" << endl;
       cin >> dispositivoss[o].semestre ;


}


system("cls"); //Borra la pantalla.
    
    for (int i = 0; i < MAXIMA_LONGITUD_CADENA_  ; i++)
    {

        struct estudiante dispositivoActual_ = dispositivoss[i];

        cout <<endl << dispositivoActual_.nombre << endl ; 

       cout <<endl << "La rama del estudiante lamado " << endl <<  dispositivoss[i].nombre<< endl  << " es de :  " << endl ;
       cout <<endl << ( dispositivoActual_.rama) << endl ;
       cout <<endl << "la edad del estudiante  de   " <<  dispositivoss[i].nombre <<endl  << " es de :  " << endl ;
       cout <<endl <<  ( dispositivoActual_.edad) << endl ;
       cout <<endl << "el codigo del usuario del estudiante " <<  endl << dispositivoss[i].nombre << endl  << " es de :  " << endl ;
       cout <<endl <<  ( dispositivoActual_.id) << endl ;
       cout <<endl << "el semestre que lleva el usuario llamado" << endl <<  dispositivoss[i].nombre << endl << " es de :  " << endl ;
       cout << endl << ( dispositivoActual_.semestre) << endl ;

    }



}