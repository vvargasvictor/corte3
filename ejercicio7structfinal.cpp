// Definición de la estructura: Defina, declare e inicialice una estructura para almacenar la información
//de los dispositivos electrónicos (celular, tablet, Smart tv, laptop etc.) que distribuye la
//empresa “Conico”. Utilice el ciclo apropiado para imprimir en pantalla información
//almacenada en la estructura y recuerde utilizar las funciones de E/S con el formato
//adecuado

#include <stdio.h>
#include <string.h> // strncpy
#include <iostream> 
using namespace std ;

#define MAXIMA_LONGITUD_CADENA 50
#define CANTIDAD_DISPOSITIVOS 100


struct dispositivo
{
    char nombre[MAXIMA_LONGITUD_CADENA];
    int edad;
    double altura;
    double ram ;
    double nucleos ;
    double almacentamientoteras ;
    
    
};

struct dispositivo dispositivos[CANTIDAD_DISPOSITIVOS];


void structnumero1();


void structnumero1()

{
    int cantdis=0  , cantidadtotalcpp=0 ;
    // Asignar datos
    for (int d = 0 ; d < CANTIDAD_DISPOSITIVOS ; d++)
    {
        cout << " --- --- " << endl ;

     cout << "digite el nombre del dispositivo " << endl ;

       cin >> dispositivos[d].nombre ;
       cout << " --- --- " << endl ;

        cout << "desea seguir incluyendo mas dispositivos ? " << endl ;
        cin >> cantdis ;
         
         cantidadtotalcpp++;

        if(cantdis==0)
        {
            d=d+100;


        }

    }
    cout << cantdis ;


    for (int o = 0 ; o < cantidadtotalcpp ; o++)


{
      
       cout <<  dispositivos[o].nombre ;
       
       cout << "digite la cantidad de ram del dispositivo " << endl ;
       cin >> dispositivos[o].ram ;

       cout << "digite el numero de nucleos del dispositivo " << endl ;
       cin >> dispositivos[o].nucleos ;
       cout << "digite el almacenamiento en teras del dispositivo " << endl;
       cin >> dispositivos[o].almacentamientoteras ;

}
system("cls"); //Borra la pantalla.



    
    for (int i = 0; i < cantidadtotalcpp ; i++)
    {

        struct dispositivo dispositivoActual = dispositivos[i];

       cout <<"La ram del dispositivo " <<  dispositivos[i].ram << " es de :  " << endl ;
       cout << ( dispositivoActual.ram) << endl ;
       cout <<"Los nucleos del dispositivo " <<  dispositivos[i].nucleos << " es de :  " << endl ;
       cout << ( dispositivoActual.nucleos) << endl ;
       cout <<"El almacenamineto en teras del dispositivo " <<  dispositivos[i].almacentamientoteras << " es de :  " << endl ;
       cout << ( dispositivoActual.almacentamientoteras) << endl ;

    }

  
}

