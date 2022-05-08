/*
  Nombre: utileria.h
  Autor: Daniel Antonio Quihuis Hernandez
  Fecha: abril del 2022
  Descripcion: Este archivo contiene la codificacion de los algoritmos requeridos para la tarea 3 de la materia analisis de algoritmos
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>

using namespace std;

//-------------------------------------------------------------------------------
// BLOQUE PARA LA DECLARACION DE FUNCIONES

//-------------------------------------------------------------------------------

enum algoritmos{sum, add, mult};

/** \fn double sum()
 * \brief realiza la sumatoria de los valores almacenados en un vector
 * \param un entero n: es la representacion de la longitud de un vector, el usuario debe determinar el tamaño de n
 * \param un vector de tipo double, con valores generados automaticamente o manualmente por el usuario
 * \return retorna la sumatoria de los elementos contenidos en el vector
*/
double sum(double [], int){

double s = 0.0;

cout << "Algoritmo Sum\n" << endl;

for (int i = 0; i <= n; i++) {

s += s + a[i];

}// LLave de cierre en for


return s;

} // LLave de cierre en la funcion sum

double rSum(double [], int){

cout << "RSUM\n" << endl;
(n < 0) ? return 0 : return rSum(a,n-1)+a[n];

}// LLave de cierre en la funcion rSum


/** \fn double add()
 * \brief realiza la suma de dos matrices a y b para almacenarlos en una matriz c
 * \param una matriz a mxn que contiene elementos de tipo entero
 * \param una matriz b mxn que contiene elementos de tipo entero
 * \param matriz mxn c que almacenara la suma de los elementos contenidos en a y b
 * \param entero m numero de filas
 * \param entero n numero de columnas
 * \return retorna una matric c con los valores sumados de las matrices a y b
*/
double add(double [], double [], double [], int, int){

  cout << "Add\n" << endl;

  for (int i = 0; <= m; m++) {
    for (int j = 0; j <= n; j++) {

      c[i,j] = a[i,j] + b[i,j];

    }// Llave de cierre para el for m
  } // Llave de cierre para el for en n

return c;

} // Llave de cierre en la funcion add

int generaMatriz(){





}

/** \fn  CapturaEntero()
 * \brief 
 * \param
 * \param
 * \return
*/
int CapturaEntero(const char solicitud[]){

   int n; // Variable de uso local

    while(true){
         cout << solicitud;
       cin >> n;

        if(cin.bad()){
            cout << "Ocurrio un error irrecuperable en el flujo de entrada" << endl;
             exit(EXIT_FAILURE);
           return 1;
        }
        if(cin.fail()){
           cout << "Error: no es un numero. Introduzca de nuevo..." << endl;
            cin.clear();
            cin.ignore(numeric_limits<int>::max(), '\n');
            continue;
       }


       return n;
    }
 }//Llave de cierre en la funcion CapturaEntero
