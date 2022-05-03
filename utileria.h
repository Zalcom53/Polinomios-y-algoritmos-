/*
  Nombre: utileria.h
  Autor: Daniel Antonio Quihuis Hernandez
  Fecha: abril del 2022
  Descripcion: Este archivo contiene la codificacion de los algoritmos requeridos para la tarea 3 de la materia analisis de algoritmos
*/

#include <iosteram>
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
n < 0 ? return 0 : rSum(a,n-1)+a[n];

}// LLave de cierre en la funcion rSum
