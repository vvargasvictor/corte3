// Defina y declare una estructura para almacenar la información personal
//y profesional de 5 atletas olímpicos nicaragüenses. Utilice un ciclo para solicitar los
//datos al usuario, utilice un ciclo para imprimir los datos en pantalla y recuerde utilizar
//las funciones de E/S con el formato adecuado. En este ejercicio se deben anidar dos 
#include <iostream>
using namespace std;



//Lo que antes era la estructura Cliente,
//Ahora se llama Persona.
struct Persona{
 char nombre[20], apellido[20];
 int edad, numeroIdentificacion ;
 long telefono;
};

struct FisicoAtleta {

float altura , champions ; 
string carrera ;

};

//Una estructura para representar la
//Fecha de nacimiento de una persona.
struct Fecha{
 int dia,mes,anio;
};

//Esta estructura representa el registro
//De una persona a una centro educativo.
//¡Dentro de ella están todos lo campos 
//Solicitados! 

struct Registro{
 Persona persona;
 Fecha fec;
FisicoAtleta Fisicoatleta ;

}nuevoIngreso [5]; 

void structnumero3();




void structnumero3(){

    for (int o = 0 ; o< 5 ; o++)

    {
        fflush(stdin);
 

 cout << "Ingrese el nombre del atleta " << endl;
 cin.getline(nuevoIngreso[o].persona.nombre,20);
 
  cout << "Ingrese el apellido del atleta" << endl;
 cin.getline(nuevoIngreso[o].persona.apellido,20);
 
 cout << "Ingrese edad del atleta " << endl;
 cin >> nuevoIngreso[o].persona.edad;
 
 cout << "Ingrese numero de identificacion del atleta " << endl;
 cin >> nuevoIngreso[o].persona.numeroIdentificacion;
 
 cout << "Ingrese el numero de telefono de atleta" << endl;
 cin >> nuevoIngreso[o].persona.telefono;
 
 cout << "Ingrese dia de nacimiento del atleta " << endl;
 cin >> nuevoIngreso[o].fec.dia;

 cout << "Ingrese mes de nacimiento del atleta " << endl;
 cin >> nuevoIngreso[o].fec.mes;
 
 cout << "Ingrese anio de nacimiento de nacimiento del atleta " << endl;
 cin >> nuevoIngreso[o].fec.anio;

 cout << "ingrese la altura del atleta " << endl ;
 cin >> nuevoIngreso[o].Fisicoatleta.altura;

  cout << "ingrese el numero de champions ganadas por el atleta  " << endl ;
 cin >> nuevoIngreso[o].Fisicoatleta.champions;

 cout << "ingrese la carrera del atleta   " << endl ;
 cin >> nuevoIngreso[o].Fisicoatleta.carrera;




    }
 
 system("cls"); //Borra la pantalla.

 for (int i = 0 ; i<5 ; i++)

 {
    Registro seranuevoregistro = nuevoIngreso[i];
     cout <<" es el nombre de :  " << endl ;
     cout << seranuevoregistro.persona.nombre << endl ;
     cout << " es el apellido de :  " << endl ;
     cout << seranuevoregistro.persona.apellido << endl ;
     cout <<" la edad es de  :  " << endl ;
     cout << seranuevoregistro.persona.edad << endl ;
     cout <<" el numero de identificacion del atleta es de   :  " << endl ;
     cout << seranuevoregistro.persona.numeroIdentificacion << endl ;
     cout <<" el numero de telefono del atleta es de   :  " << endl ;
     cout << seranuevoregistro.persona.telefono << endl ;
     cout <<" el dia de nacimiento del atleta es de   :  " << endl ;
     cout << seranuevoregistro.fec.dia << endl ;
     cout <<" el mes de nacimiento del atleta es de   :  " << endl ;
     cout << seranuevoregistro.fec.mes << endl ;
     cout <<" el anio de nacimineto del atleta es de   :  " << endl ;
     cout << seranuevoregistro.fec.anio<< endl ;
     cout <<" la altura del atleta es de   :  " << endl ;
     cout << seranuevoregistro.Fisicoatleta.altura<< endl ;
     cout <<" las champios ganadas del atleta es de   :  " << endl ;
     cout << seranuevoregistro.Fisicoatleta.champions << endl ;
     cout <<" la carrera del atleta es   :  " << endl ;
     cout << seranuevoregistro.Fisicoatleta.carrera << endl ;
     

 }

 
}
