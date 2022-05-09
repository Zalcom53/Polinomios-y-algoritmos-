/*
  Nombre: utileria.h
  Autor: Daniel Antonio Quihuis Hernandez
  Fecha: mayo del 2022
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

/** \fn  evaluaAlgoritmo1()
 * \brief
 * \param
 * \param
 * \return
*/
float evaluaAlgoritmo1(int , float, float[]){

cout << "Algoritmo 1\n" << endl;

float xn, s;

S = c[0];

  for (int i = 0; i < n; i++) {

    xn = x;

    for (int j = 0; j < n; j++) {

      xn += xn*x;

    } // Llave de cierre en el for para el contador j

    s =+ s + (c[i] * xn);

} //Llave de cierre en el for para el contador i

return s;
}// Llave de cierre en evalua evaluaAlgoritmo1

/** \fn  potencia()
 * \brief
 * \param
 * \param
 * \return
*/
float potencia(float, int) {

  if (j==0) {
    return 1.0;
  }else if(j%2==1){
    return x*potencia(x,j-1);
  }else{
    float t = potencia(x,j/2);
    return t*t;
  }

  return 0;
}

/** \fn  evaluaAlgoritmo2()
 * \brief
 * \param
 * \param
 * \return
*/
double evaluaAlgoritmo2(int, float [], float){

  cout << "Algoritmo 2\n" << endl;

  float s;

  s = c[0];

  for(int i = 1; i < n; i++) {

    s+= s + (c[i]*potencia(x,i));

  } // Llave de cierre en el for para el contador i

  return s;

} // Llave de cierre en evaluaAlgoritmo2


/** \fn  evaluaAlgoritmo3()
 * \brief
 * \param
 * \param
 * \return
*/
float evaluaAlgoritmo3(int, float, float []){

  cout << "Algoritmo 3\n" << endl;
  float xn = 1.0, s = c[0];

  for (size_t i = 0; i < count; i++) {

    xn = xn * x;
    s = s + c[i] * xn;

  }// Llave de cierre en el for para el contador i

  return s;

} // Llave de cierre en evaluaAlgoritmo3

/** \fn  evaluaAlgoritmo4()
 * \brief
 * \param
 * \param
 * \return
*/
float evaluaAlgoritmo4(int, float, float []){

  cout << "Algoritmo 4\n" << endl;

  float s = 0.0;

  for (int i = n-1; i >= 0; i--) {

    s = s*x + c[i];

  } // LLave de cierre en el for para el contador i

  return s;

} // Llave de cierre en evaluaAlgoritmo4

/** \fn double sum()
 * \brief realiza la sumatoria de los valores almacenados en un vector
 * \param un entero n: es la representacion de la longitud de un vector, el usuario debe determinar el tamaño de n
 * \param un vector de tipo double, con valores generados automaticamente o manualmente por el usuario
 * \return retorna la sumatoria de los elementos contenidos en el vector
*/
int sum(double [], int){

double s = 0.0;

cout << "Algoritmo Sum\n" << endl;

for (int i = 0; i <= n; i++) {

s += a[i];

}// LLave de cierre en for


return s;

} // LLave de cierre en la funcion sum

/** \fn  rSum()
 * \brief
 * \param
 * \param
 * \return
*/
int rSum(double [], int){

cout << "RSUM\n" << endl;
(n <= 0) ? return 0.0 : return rSum(a,n-1)+a[n];

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

/** \fn  fibonacci()
 * \brief Calcula la sucesion de Fibonacci
 * \param un entero n que es el tope de la sucesion
 * \param un entero que contendra el calculo de la sucesion
 * \return un entero fn el cual es el valor calculado de al sucesion de Fibonacci
*/
int fibonacci(int n, int fn){

  cout << "Fibonacci\n" << endl;

  if(n <= 1) return n;

  int fnm2 = 0, fnm1 = 1,fn;
  for(int i = 2; i < n; i++)

  fn = fnm1 + fnm2;
  fnm2 = fnm1;
  fnm1 = fn;

  } // Llave de cierre en for

return fn;

}// Llave de cierre en la funcion fibonacci

/** \fn  trasp()
 * \brief calcula la transpuesta de una matriz
 * \param una matriz de enteros
 * \param un entero n como tope de la matriz
 * \return no retorna valores
*/
void trasp(){

  cout << "trasp\n" << endl;

  float aux;
  for(int i = 0; i <n-1; i++){

    for (int j = i+1; j < n; j++) {

      aux = a[i][j];

      A[i][j] = A[j][i];

      A[j][i] = aux;

    } // Llave de cierre para el for con el contador j

  } // LLave de cierre en el for para el contador i


} // Llave de cierre en al funcion trasp

/** \fn  mult()
 * \brief calcula la multiplicacion de una matriz cuadrada
 * \param una matriz a de enteros con valores precargados de forma aleatoria
 * \param una matriz b de enteros con valores precargados de forma aleatoria
 * \param una matriz c de enteros con valores precargados con basura(valores que se generaron al crear la matriz)
 * \return retorna una matriz c de enteros, los valores contenidos en la matriz c es el producto del calculo de multiplicar las matrices a y b
*/
void mult(int [], int [], int [], int){

  cout << "mult\n" << endl;

  for (int i = 0; i < n; i++) {

    for (int j = 0; j < n; j++) {

        c[i][j] = 0;

      for (int k = 0; k < n; k++) {

        c[i][j] = c[i][j] + a[i][k] * b[k]][j];

      } // Llave de cierre en el for para el contador k

    }// Llave de cierre en el for para el contador j

  } // Llave de cierre en el for con el contador i

}// Llave de cierre en la funcion mult

/** \fn  perm()
 * \brief
 * \param
 * \param
 * \return
*/
void perm(){

cout << "Perm\n" << endl;



}// Llave de cierre en la funcion perm

/** \fn  seqSearch()
 * \brief
 * \param
 * \param
 * \return
*/
int seqSearch(int [], int, int){

  cout << "SeqSearch\n" << endl;

  int i = n;
  a[0] = x;

  while (a[i] != x){

    i = i-1;

  } // Llave de cierre en el while

  return i;

}// Llave de cierre en la funcion seqSearch

/** \fn  binSearch()
 * \brief
 * \param
 * \param
 * \return
*/
int binSearch(int [], int , int){

  cout << "BinSearch\n" << endl;

  



}// LLave de cierre en la funcion binSearch

/** \fn  binSearch1()
 * \brief
 * \param
 * \param
 * \return
*/
int binSearch1(){

  cout << "binSearch1\n" << endl;

}// Llave de cierre en la funcion binSearch1

/** \fn  generaMatriz()
 * \brief
 * \param
 * \param
 * \return
*/
int generaMatriz(){

int seleccionUsuario;
seleccionUsuario = CapturaEntero("Seleccione una opcion valida: ");
//(n == 1)? matrizManual(int [], int):matrizAleatoria(int [], int);

} // Llave de cierre en generaMatriz


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
