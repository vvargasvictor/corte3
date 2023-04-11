#include <iostream>
using namespace std ;

void CalcularMedia();
bool EvaluarNUm (int num);


void CalcularMedia()

{
    int num=0 , suma= 0;
    float media=0 ;
    float cant= 0; 
    

    for (int i = 0 ; num>=0 ; i++ )
    {
        cout << "dume un nuemro " ;
        cin >> num ;

        if (EvaluarNUm(num))
        {
             suma+= num ;
             cant ++ ;

        }

        media = suma / cant ;


    }
     

}

bool EvaluarNUm (int num)

{
    return num > 0 ;

}

