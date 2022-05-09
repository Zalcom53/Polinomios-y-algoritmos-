/*
  Nombre: main.cpp
  Autor: Daniel Antonio Quihuis Hernandez
  Fecha: mayo del 2022
  Descripcion: Este archivo contiene la implementacion del archivo utileria.h
*/


#include <iostream>
#include <cstdlib>

using namespace std;

//#include "utileria.h"

//-------------------------------------------------------------------------------
// BLOQUE PARA LA DECLARACION DE FUNCIONES
float evaluaAlgoritmo1(int n, float c[], float x);
float potencia(float x, int j);
float evaluaAlgoritmo2(int n, float c[], float x);
float evaluaAlgoritmo3(int n, float c[], float x);
float evaluaAlgoritmo4(int n, float c[], float x);
int sum(int a[], int n);
int rSum(int a[], int n);
float add(float a[], float b[], float c[], int m, int n);
int fibonacci(int n);
void trasp(float a[][], int n);
void mult(int a[], int b[], int c[], int n);
void perm(float a[], int k, int n);
int seqSearch(int a[], int x, int n);
int binSearch(int a[], int x, int n);
int binSearch1(int a[], int n, int x);
int generaMatriz(int a[][], int n);
void generaVector(int a[], int n);
int CapturaEntero(const char solicitud[]);
//-------------------------------------------------------------------------------

//Matices
int mA[][];
int mB[][];
int mC[][];
// Vectores
int a[];
int b[];
int c[];

int n; // longitud para vectores y tamaño para matrices cuadradas

/** \fn int main()
 * \brief realiza la implementacion del archivo utileria.cpp
 * \param no recibe parametros
 * \return Devuelve un 0
*/
int main(){

  n = CapturaEntero("Ingrese el tamanio de n: ");
  generaVector(a, n);
  generaMatriz(mA, n);
  generaMatriz(mB, n);

  sum(a,n);



  return 0;
} // Llave de cierre en la funcion main

/** \fn  evaluaAlgoritmo1()
 * \brief
 * \param
 * \param
 * \return
*/
float evaluaAlgoritmo1(int n, float c[], float x){

cout << "Algoritmo 1\n" << endl;

float xn, s;

s = c[0];

  for (int i = 0; i < n; i++) {

    xn = x;

    for (int j = 0; j < n; j++) {

      xn += xn*x;

    } // Llave de cierre en el for para el contador j

    s =+ s + (c[i] * xn);

} //Llave de cierre en el for para el contador i

return s;
}// Llave de cierre en evalua evaluaAlgoritmo1
//-------------------------------------------------------------------------------

/** \fn  potencia()
 * \brief
 * \param
 * \param
 * \return
*/
float potencia(float x, int j){

  if (j==0) {
    return 1.0;
  }else if(j%2==1){
    return x*potencia(x,j-1);
  }else{
    float t = potencia(x,j/2);
    return t*t;
  }

  return 0;
} // Llave de cierre en la funcion potencia
//-------------------------------------------------------------------------------

/** \fn  evaluaAlgoritmo2()
 * \brief
 * \param
 * \param
 * \return
*/
float evaluaAlgoritmo2(int n, float c[], float x){

  cout << "Algoritmo 2\n" << endl;

  float s;

  s = c[0];

  for(int i = 1; i < n; i++) {

    s+= s + (c[i]*potencia(x,i));

  } // Llave de cierre en el for para el contador i

  return s;

} // Llave de cierre en evaluaAlgoritmo2
//-------------------------------------------------------------------------------

/** \fn  evaluaAlgoritmo3()
 * \brief
 * \param
 * \param
 * \return
*/
float evaluaAlgoritmo3(int n, float c[], float x){

  cout << "Algoritmo 3\n" << endl;
  float xn = 1.0, s = c[0];

  for (int i = 1; i < n; i++) {

    xn = xn * x;
    s = s + c[i] * xn;

  }// Llave de cierre en el for para el contador i

  return s;

} // Llave de cierre en evaluaAlgoritmo3
//-------------------------------------------------------------------------------

/** \fn  evaluaAlgoritmo4()
 * \brief
 * \param
 * \param
 * \return
*/
float evaluaAlgoritmo4(int n, float c[], float x){

  cout << "Algoritmo 4\n" << endl;

  float s = 0.0;

  for (int i = n-1; i >= 0; i--) {

    s = s*x + c[i];

  } // LLave de cierre en el for para el contador i

  return s;

} // Llave de cierre en evaluaAlgoritmo4
//-------------------------------------------------------------------------------

/** \fn double sum()
 * \brief realiza la sumatoria de los valores almacenados en un vector
 * \param un entero n: es la representacion de la longitud de un vector, el usuario debe determinar el tamaño de n
 * \param un vector de tipo double, con valores generados automaticamente o manualmente por el usuario
 * \return retorna la sumatoria de los elementos contenidos en el vector
*/
int sum(int a[], int n){

double s = 0.0;

cout << "Algoritmo Sum\n" << endl;

for (int i = 0; i <= n; i++) {

s += a[i];

}// LLave de cierre en for


return s;

} // LLave de cierre en la funcion sum
//-------------------------------------------------------------------------------

/** \fn  rSum()
 * \brief
 * \param un vector de enteros
 * \param un entro como tope del vector
 * \return
*/
int rSum(int a[], int n){

  if(n <= 0) return 0.0;
  else return rSum(a,n-1) + a[n];

}// LLave de cierre en la funcion rSum
//-------------------------------------------------------------------------------

/** \fn double add()
 * \brief realiza la suma de dos matrices a y b para almacenarlos en una matriz c
 * \param una matriz a mxn que contiene elementos de tipo entero
 * \param una matriz b mxn que contiene elementos de tipo entero
 * \param matriz mxn c que almacenara la suma de los elementos contenidos en a y b
 * \param entero m numero de filas
 * \param entero n numero de columnas
 * \return retorna una matric c con los valores sumados de las matrices a y b
*/
float add(float a[], float b[], float c[], int m, int n){

  cout << "Add\n" << endl;

  for (int i = 0; i <= m; m++) {
    for (int j = 0; j <= n; j++) {

      c[i,j] = a[i,j] + b[i,j];

    }// Llave de cierre para el for m
  } // Llave de cierre para el for en n

return c;

} // Llave de cierre en la funcion add
//-------------------------------------------------------------------------------

/** \fn  fibonacci()
 * \brief Calcula la sucesion de Fibonacci
 * \param un entero n que es el tope de la sucesion
 * \param un entero que contendra el calculo de la sucesion
 * \return un entero fn el cual es el valor calculado de al sucesion de Fibonacci
*/
int fibonacci(int n){

  cout << "Fibonacci\n" << endl;

  if(n <= 1) return n;

  int fnm2 = 0, fnm1 = 1,fn;
  for(int i = 2; i < n; i++){

  fn = fnm1 + fnm2;
  fnm2 = fnm1;
  fnm1 = fn;

  } // Llave de cierre en for

return fn;

}// Llave de cierre en la funcion fibonacci
//-------------------------------------------------------------------------------

/** \fn  trasp()
 * \brief calcula la transpuesta de una matriz
 * \param una matriz de enteros
 * \param un entero n como tope de la matriz
 * \return no retorna valores
*/
void trasp(float a[][], int n){

  cout << "trasp\n" << endl;

  float aux;
  for(int i = 0; i <n-1; i++){

    for (int j = i+1; j < n; j++) {

      aux = a[i][j];

      a[i][j] = a[j][i];

      a[j][i] = aux;

    } // Llave de cierre para el for con el contador j

  } // LLave de cierre en el for para el contador i


} // Llave de cierre en al funcion trasp
//-------------------------------------------------------------------------------

/** \fn  mult()
 * \brief calcula la multiplicacion de una matriz cuadrada
 * \param una matriz a de enteros con valores precargados de forma aleatoria
 * \param una matriz b de enteros con valores precargados de forma aleatoria
 * \param una matriz c de enteros con valores precargados con basura(valores que se generaron al crear la matriz)
 * \return retorna una matriz c de enteros, los valores contenidos en la matriz c es el producto del calculo de multiplicar las matrices a y b
*/
void mult(int a[][], int b[][], int c[][], int n){

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
//-------------------------------------------------------------------------------

/** \fn  perm()
 * \brief realiza la permutacion de una matriz
 * \param una matriz de tipo flotante
 * \param un entero
 * \param un entero
 * \return no retorna valores
*/
void perm(float a[], int k, int n){

cout << "Perm\n" << endl;

if(k==n){
/*  for (int i = 0; i < n; i++) {

    cout << a[i] << " ";

    } // LLave de cierre en el for para el contador i
    cout << endl;
*/
}else{

  int t;

  for (int i = k; i < n; i++) {

    t = a[k];
    a[k] = a[i];
    a[i] = t;
    perm(a,k+1,n);
    t = a[k];
    a[k] = a[i];
    a[i] = t;

    } // LLave de cierre en el for con el contador k

  } // Llave de cierre en el else

}// Llave de cierre en la funcion perm
//-------------------------------------------------------------------------------

/** \fn  seqSearch()
 * \brief realiza la busqueda secuencial en un vector
 * \param una matriz de enteros
 * \param un entero como tope
 * \param un entero
 * \return retorna el valor si es que fue encontrado
*/
int seqSearch(int a[], int x, int n){

  cout << "SeqSearch\n" << endl;

  int i = n;
  a[0] = x;

  while (a[i] != x){

    i = i-1;

  } // Llave de cierre en el while

  return i;

}// Llave de cierre en la funcion seqSearch
//-------------------------------------------------------------------------------

/** \fn  binSearch()
 * \brief realiza la busqueda binaria de un vecot
 * \param una matriz de enteros
 * \param un entero como tope
 * \param un entero
 * \return regresa un 0
*/
int binSearch(int a[], int x, int n){

  cout << "BinSearch\n" << endl;

  int low = 1, high = n, mid;
  while (low <= high) {

    mid = (low + high)/2;
    if(x < a[mid]) high = mid -1;
    else if(x > a[mid]) low = mid + 1;
    else return mid;

  } // Llave de cierre en el while
return 0;
}// LLave de cierre en la funcion binSearch
//-------------------------------------------------------------------------------

/** \fn  binSearch1()
 * \brief realiza la busqueda bianria
 * \param un vector de tipo entero
 * \param un entero como tope
 * \param un entero
 * \return regresa un 0
*/
int binSearch1(int a[], int n, int x){

  cout << "binSearch1\n" << endl;

  int low = 1, high = n + 1, mid;
  while(low < (high - 1)){

    mid = ((low + high) /2);
    if (x < a[mid]) high = mid;
    else low = mid;

  } // Llave de cierre en el while
if(x == a[low]) return low;
else return 0;
}// Llave de cierre en la funcion binSearch1
//-------------------------------------------------------------------------------

/** \fn  generaMatriz()
 * \brief genera una matriz segun su tipo
 * \param recibe una matriz
 * \param recibe un entero como tope de la matriz
 * \return retorna una matriz generada de forma aleatoria
*/
int generaMatriz(int a[][], int n){

//(n == 1)? matrizManual(int [], int):matrizAleatoria(int [], int);

} // Llave de cierre en generaMatriz
//-------------------------------------------------------------------------------

/** \fn  generaVector()
 * \brief genera un vector
 * \param recibe un vector de tipo entero
 * \param un entero como longitud del vector
 * \return retorna un vector generado de forma aleatoria
*/
void generaVector(int a[], n) {

for (int i = 0; i < n; i++) {
  a[i] = 1 + rand()%n;
}

} // Llave de cierre en genera vector
//-------------------------------------------------------------------------------

/** \fn  CapturaEntero()
 * \brief realiza la captura de un entero de forma segura(se asegura que el dato capturado sea un numero entero y no una letra u otro caracter no permitido)
 * \param una cadena de caracteres
 * \return retorna un entero como un valor aceptado
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
