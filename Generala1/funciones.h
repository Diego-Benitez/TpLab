#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include "rlutil.h"
#include <cstring>

using namespace std;
//#ifndef FUNCIONES_H_INCLUDED

void cargarVector(int v[],int tam); /// asigna valores a cada una de las posiciones del vector

void mostrarVector(int v[],int tam); /// muestra lo que contiene cada una de las posiciones del vector

void ponerCero(int v[], int tam); /// pone en 0 todas las posiciones del vector

int posicionNumeroEnVector(int v[], int tam,int numero); /// devuelve la posici�n que ocupa un n�mero que se //env�a/// como par�metro. Devuelve la primera posici�n que encuentra/// el n�mero. Si no lo encuentra devuelve -1

int contarNumerosRepetidos(int v[], int numero,int tam); /// cuenta la cantidad de veces que se/// repite un //n�mero en el vector

int maximoVector(int v[], int tam); /// devuelve  la posici�n (primera) que /// ocupa el m�ximo en el vector

int minimoVector(int v[], int tam); /// devuelve  la posici�n (primera) que/// ocupa el m�nimo en el vector

void cargarAleatorio(int v[], int tam,int limite); /// asigna valores aleatorios a cada al vector. EL par�metro/// limite establece el valor maximo posible

void ordenarVector(int v[], int tam); /// ordena de menor a mayor un vector

int sumarVector(int v[], int tam); /// suma los valores contenidos en el vector

void copiarVector(int v[], int v2[], int tam); /// copia el vector v en v2

bool compararVectores(int v[], int v2[],int tam); // compara los dos vectores que recibe. Si son iguales ///devuelve// true, si no devuelve false

void cargarDados(int v[], int limite, int dadoSelec);

bool escalera(int vec[], int tam); /// Desarrollo de funciones / Definiciones

void dibujarCuadrado(int posx, int posy);
void dibujarDado(int posx, int posy, int num);

///Dados---------------------
void dibujarCuadrado(int posx, int posy) {
  for (int x = 0; x < 7; x++) {
    for (int y = 0; y < 3; y++) {
      rlutil::locate(x + posx, y + posy);
      rlutil::setBackgroundColor(15);
      cout << " ";
    }
  }
}
void dibujarDado(int posx, int posy, int num) {
  dibujarCuadrado(posx, posy);

  switch (num)
  {
  case 1:
    rlutil::locate(posx + 3, posy + 1);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)254;
    break;
  case 2:
    rlutil::locate(posx + 5, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;
    break;
  case 3:
    rlutil::locate(posx + 3, posy + 1);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)254;

    rlutil::locate(posx + 5, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    break;

  case 4:
    rlutil::locate(posx + 5, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    rlutil::locate(posx + 5, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    break;

  case 5:
    rlutil::locate(posx + 5, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 3, posy + 1);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)254;

    rlutil::locate(posx + 1, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    rlutil::locate(posx + 5, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    break;

  case 6:
    rlutil::locate(posx + 5, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 1, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;

    rlutil::locate(posx + 3, posy);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)220;


    rlutil::locate(posx + 3, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    rlutil::locate(posx + 1, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    rlutil::locate(posx + 5, posy + 2);
    rlutil::setBackgroundColor(15);
    rlutil::setColor(0);
    cout << (char)223;

    break;
  default:
    break;
  }

}
void cargarAleatorio(int v[], int tam, int limite) {

  srand(time(NULL));
  for (int num = 1; num <= tam; num++) {
     v[num-1] = (rand() % limite) + 1;
    int valorDado = v[num-1];
    dibujarDado(num*14, 8, valorDado);
  }
  cout<<endl;
  rlutil::setBackgroundColor(5);


  //rlutil::anykey();
  /*for (i = 0; i < tam; i++) {
    v[i] = (rand() % limite) + 1;
  }*/
}
/*void cargarAleatorio(int v[], int tam, int limite) {
  int i;
  srand(time(NULL));
  for (i = 0; i < tam; i++) {
    v[i] = (rand() % limite) + 1;
  }
}*/
void cargarDados(int v[], int limite, int dadoSelec) {
  int i = dadoSelec - 1;
  srand(time(NULL));
  v[i] = (rand() % limite) + 1;
}


void mostrarVector(int v[], int tam) {
  int i;
  for (i = 0; i < tam; i++) {
    int valorNuevo = v[i];
    dibujarDado((i+1)*14,4, valorNuevo);
  }
}


int posicionNumeroEnVector(int v[], int tam, int numero) {
  int i;
  for (i = 0; i < tam; i++) {
    if (v[i] == numero)
      cout << "Esta es la posicion del vector: " << v[i] << "\t";
    return i;
  }
  return -1;
}
int minimoVector(int v[], int tam) {
  int i, posMin = 0;
  for (i = 1; i < tam; i++) {
    if (v[i] < v[posMin]) {
      posMin = i;
    }
  }
  return posMin;
}
void ordenarVector(int v[], int tam) {
  int i, j, posmin, aux;
  for (i = 0; i < tam - 1; i++) {
    posmin = i;
    for (j = i + 1; j < tam; j++) {
      if (v[j] < v[posmin])
        posmin = j;
    }
    aux = v[i];
    v[i] = v[posmin];
    v[posmin] = aux;
  }
}

int maximoVector(int v[], int tam) {
  int i, posMax = 0;
  for (i = 1; i < tam; i++) {
    if (v[i] > v[posMax]) {
      posMax = i;
    }
  }
  return posMax;
}

int contarNumerosRepetidos(int v[], int numero, int tam) {
  int i, cant = 0;
  for (i = 0; i < tam; i++) {
    if (v[i] == numero)
      cant++;
  }
  return cant;
}

void ponerCero(int v[], int tam) {
  int i;
  for (i = 0; i < tam; i++) {
    v[i] = 0;
  }
}

int sumarVector(int v[], int tam) {
  int i, suma = 0;
  for (i = 0; i < tam; i++) {
    suma += v[i];
  }
  return suma;
}

void copiarVector(int v[], int v2[], int tam) {
  int i;
  for (i = 0; i < tam; i++) {
    v2[i] = v[i];
  }
}

bool compararVectores(int v[], int v2[], int tam) {
  int i;
  for (i = 0; i < tam; i++) {
    if (v2[i] != v[i])
      cout<<"Son distintos";
      return false;
  }
  return true;
}

void cargarVector(int v[], int tam) {
  int i;
  for (i = 0; i < tam; i++) {
    cout << "INGRESE NUMERO DE DADO: ";
    cin >> v[i];
  }
  }
//[:]  [:.] [.] [•:•] [::.][::]
///--------------------Funciones de Combinaciones------------------------
bool escalera(int v[], int tam) {

  bool escalera = false;

  int bp = 1;

  ordenarVector(v,5);

  if (v[0] == 1) {
    for (int i = 0; i < 5; i++) {
      if (v[i] == i + 1) {
        bp = 0;
        if(v[i]==5 && v[i-1]==4){
          bp=0;
        }
        else{
          bp = 1;
        }
      } else {
        bp = 1;

      }
    }
  } else if (v[0] == 2) {
    for (int j = 0; j < 5; j++) {
      if (v[j] == j + 1) {
        bp = 0;
        if(v[j]==6 && v[j-1]==5){
          bp=0;
        }
        else{
          bp = 1;
        }

      } else {
        bp = 1;
      }
    }
  }
  if (bp == 0) {
    escalera = true;
  }
  return escalera;
}


bool isFull(int v[])
{
    int n1, n2 = 0, count1 = 1, count2 = 0;
    bool isFull=false;
    n1 = v[0];
    for (int i = 1; i < 5; i++)
    {
        if (n1 == v[i])
            count1++;
        else if (n2 == 0)
        {
            n2 = v[i];
            count2++;
        }
        else if (n2 == v[i])
            count2++;
    }

    if((count1 == 3 && count2 == 2) || (count2 == 3 && count1 == 2)){
      isFull=true;

    }
  return isFull;
}

bool Unos(int vec[]) {
  bool Unos = false;
  int contador = 0;
  int acum=0;
  for (int i = 0; i < 5; i++) {
    if (vec[i] == 1) {
      contador++;

    }
  }
  if (contador > 0) {
     Unos = true;
  }

  return Unos;
}

bool Dos(int vec[]) {
  bool Dos = false;
  int contador = 0;
  int acum=0;
  for (int i = 0; i < 5; i++) {
    if (vec[i] == 2) {
      contador++;

    }
  }
  if (contador > 0) {
     Dos = true;

  }

  return Dos;

}

bool Tres(int vec[]) {
  bool Tres = false;
  int contador = 0;
  int acum=0;
  for (int i = 0; i < 5; i++) {
    if (vec[i] == 3) {
      contador++;

    }
  }
  if (contador > 0) {
     Tres = true;

  }

  return Tres;

}

bool Cuatro(int vec[]) {
  bool Cuatro = false;
  int contador = 0;
  int acum=0;
  for (int i = 0; i < 5; i++) {
    if (vec[i] == 4) {
      contador++;

    }
  }
  if (contador > 0) {

     Cuatro = true;

  }

  return Cuatro;

}

bool Cinco(int vec[]) {
  bool Cinco = false;
  int contador = 0;
  int acum=0;
  for (int i = 0; i < 5; i++) {
    if (vec[i] == 5) {
      contador++;

    }
  }
  if (contador > 0) {
     Cinco = true;

  }

  return Cinco;

}

bool Seis(int vec[]) {
  bool Seis = false;
  int contador = 0;
  int acum=0;
  for (int i = 0; i < 5; i++) {
    if (vec[i] == 6) {
      contador++;

    }
  }
  if (contador > 0) {
     Seis = true;

  }

  return Seis;

}

bool Poker(int vec[]) {
  bool Poker=false;
  int cont = 0,i;
  int cont1=0;

	for (i=1; i<5; i++)
    {
		  if (vec[0]!=vec[i])
      {
			  if (vec[i]==vec[i-1])
        {
				cont1 = cont1+1;
        }
      }
		  else{
        if(vec[i]==vec[i-1]){

				    cont = cont+1;
          }
			    else if(vec[i]==vec[i-2]){

          cont = cont+1;
				      }
      }
	  }

	if(cont==3||cont1==3){
   Poker=true;

  }
  return Poker;
}

bool Generala(int vec[]) {
  bool Generala = false;
  int contador = 1;
  for (int i = 1; i < 5; i++) {
    if (vec[i] == vec[0]) {
      contador++;
    }
  }
  if (contador == 5) {
    Generala = true;
  }

  return Generala;
}

///------Funciones de Tabla Combinaciones y Puntajes--------

int f1(int vec[5], int valor){
    int suma = 0;

    for (int i = 0; i < 5; i++)
    {
        if (vec[i] == valor)
            suma += vec[i];
    }
    return suma;
}

int maximo(int vec[6])
{
    int max;

    for (int i = 0; i < 6; i++)
    {
        if (i == 0 || vec[i] > max)
            max = vec[i];
    }
    return max;
}

int cargar(int p[]){ //Puntos cargados
  int i;
  for (i = 0; i < 10; i++) {
    p[i] = -1;
  }
  return 0;
}

int Puntuacion(int vec[5], int p[]) ///r=4 des
{
   maximo(vec);

  int ptsD[9],tam, i,pg, salir,k,j;
  bool bandera=0;

  ///cargar con menos1

  for (i = 0; i < 10; i++) {
    ptsD[i] = -1;
  }


  //posicionNumeroEnVector(v, tam, numero);
  //copiarVector(ptsD, p, 10);

  compararVectores(ptsD, p,10);
  ///
  /*for(i = 0; i < 10; i++){
      if (ptsD[i] == -1 && ptsD[i]!=0){
        ptsD[i] = f1(vec, i+1);

        cout<<"Puntos disponibles: "<<ptsD[i]<<" En: "<<i+1<<endl;

        if(i==6){

        }


      }
  }
*/


    /*pts[0] = f1(vec, 1);
    pts[1] = f1(vec, 2);
    pts[2] = f1(vec, 3);
    pts[3] = f1(vec, 4);
    pts[4] = f1(vec, 5);
    pts[5] = f1(vec, 6);*/


    for(i=0; i<6; i++){
      if (ptsD[i]>0) {

        cout<<"Puntos disponibles: "<<ptsD[i]<<" En: "<<i+1<<endl;

      }
    }
    if (Generala(vec))
        {
            cout << " Disponible Generala: 50" << endl;

            ptsD[6]=50;
        }
        else if (escalera(vec,tam))
        {
            cout << "Disponible Escalera: 40" << endl;

            ptsD[7]=40;
        }
        else if (Poker(vec))
        {
            cout << "Disponible Poker: 30" << endl;

          ptsD[8]=30;
        }
        else if (isFull(vec))
        {
            cout << "Disponible Full: 20" << endl;

          ptsD[9]=20;
        }
        else{
            return maximo(ptsD);
        }

    cout<<"Presione 1 para salir";
        cin>>salir;
        if(salir==1){
          return 0;
        }

    /*
    if(bandera==0){

      cout<<"¿Que puntos quiere guardar?: "<<endl;
      cin>>pg;
      dire_pg=&pg;
      //busqueda binaria o secuencial
      while(pg !=0 ){
        k=0;
        j=0;
        while(k==0 && j<10){
          if(pg == pts[j]){
            k=1;
          }
          else j++;
          if(k==1){
            puntaje=pg;
            ptosT=ptosT+pg;
            bandera=1;

          }
        }
      }
      if(bandera==1){
        cout<<"Puntaje acumulado: "<<ptosT<<endl;*/

      //}



    //}


  int vPuntos[10];


}

///--------------------Funcion de Tirada---------------
int tirada(int cont, int opcTirada, int vec[], int vT[], int tiradaTotal) {

  int lanzarDados, dadoSelec;


  while (cont >= 2 && cont <= 3) {

    cout << "cuantos dados desea volver a lanzar? ";
    cin >> lanzarDados; // hacer un for para seleccionar los dados a lanzar solo
                        // si son mayor a 1

    if (lanzarDados >= 1) {
      for (int i = 0; i < lanzarDados; i++) {
        cout << "Que dado desea lanzar? (Del 1 al 5) ";
        cin >> dadoSelec;

        switch (dadoSelec) { // intento de reemplazar un dado seleccionado por
                             // una tirada al azar y luego mostrar los dados pero
                             // modificados
        case 1:
          cargarDados(vec, 6, dadoSelec);
          // mostrarVector(vec,5);

          break;
        case 2:
          cargarDados(vec, 6, dadoSelec);
          // mostrarVector(vec,5);
          break;
        case 3:
          cargarDados(vec, 6, dadoSelec);
          // mostrarVector(vec,5);
          break;
        case 4:
          cargarDados(vec, 6, dadoSelec);
          // mostrarVector(vec,5);
          break;
        case 5:
          cargarDados(vec, 6, dadoSelec);
          // mostrarVector(vec,5);
          break;
        }
      }
    }

    rlutil::cls();
    rlutil::setColor(15);
    cout<< " TIRADA Nro: "<< cont << " - TIRADAS TOTALES: "<<tiradaTotal<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;

    mostrarVector(vec, 5);

    cout<<endl;

    if (cont == 2){

        Generala(vec);
        rlutil::setBackgroundColor(5);
        rlutil::setColor(15);

        cout << "¿Quiere Realizar otra tirada [1]? " << endl;
        cout << "¿Quiere anotar el puntaje obtenido [2]?" << endl;
        cin >> opcTirada;

        if (opcTirada == 1) {
            cont++;
            tiradaTotal++;

      } else if (opcTirada == 2) {
            cont = 1;
            Puntuacion(vec, vT);
            cout << "FIN DE RONDA" << endl;
      }
    } else if ( cont == 3) {
        cont = 1;
        Generala(vec);
        rlutil::setBackgroundColor(5);
        rlutil::setColor(15);

        cout<<"*combinaciones ganadoras disponibles: "<<endl;
        cout<<"*anular combinacion: "<<endl;
        Puntuacion(vec, vT);
        cout << "FIN DE RONDA" << endl;


      }
}
return tiradaTotal;
}
//tabla -------------------------
/*
#include <iostream>
#include <cstring>
#define COLUMNAS 1
#define FILAS 11
#define ESPACIO_SIN_PUNTOS'.'

using namespace std;
// Rellena el tablero de espacios sin puntos

void cargarVector(string cat[], int tam) {

     cat[0]="Juego de 1     (1)";
     cat[1]="Juego de 2     (2)";
     cat[2]="Juego de 3     (3)";
     cat[3]="Juego de 4     (4)";
     cat[4]="Juego de 5     (5)";
     cat[5]="Juego de 6     (6)";
     cat[6]="Escalera       (7)";
     cat[7]="Full           (8)";
     cat[8]="Poker          (9)";
     cat[9]="Generala      (10)";
    cat[10]="Puntaje total (11)";

}
void iniciarTablero(char tablero[FILAS][COLUMNAS]) {

  for (int i = 0; i < FILAS; i++) {

    for (int j = 0; j < COLUMNAS; j++) {
      tablero[i][j] = ESPACIO_SIN_PUNTOS ;
    }
  }
}
void imprimirSeparadorEncabezado() {
int i;
  for ( i = 0; i <= COLUMNAS; i++) {
    cout<<"-----------";
    if ( i  == COLUMNAS) {
      cout<<"-";;
    }
  }
  cout<<"\n";
}
void imprimirSeparadorFilas() {
  int i;
  for (i = 0; i <= COLUMNAS; i++) {
    cout<<"-----------";
    if (i == COLUMNAS) {
      cout<<"-";
    }
  }
  cout<<"\n";
}
void imprimirEncabezado() {
  imprimirSeparadorEncabezado();
  cout<<"|               ";
  int i;
  for (i = 0; i < COLUMNAS; i++) {
      cout<<"|  "<< i+1<<"  ";
    if (i + 1 == COLUMNAS) {
      cout<<"|";
    }
  }
  cout<<"\n";
}

void imprimirTablero(char tablero[FILAS][COLUMNAS] ) {//int deberiaMostrarPuntuacion
  string cat[11];
  cargarVector(cat, 11);

  imprimirEncabezado();
  imprimirSeparadorEncabezado();

  for (int i = 0; i < FILAS; i++) {

    // Imprimir la categoria en la fila

    cout<<"|"<< cat[i]<<" ";

    for (int j = 0; j < COLUMNAS; j++) {

      char verdaderaLetra = ESPACIO_SIN_PUNTOS;

      char letraActual = tablero[i][j];
      /*if (letraActual == MINA) {
        verdaderaLetra = ESPACIO_SIN_DESCUBRIR;
      } else if (letraActual == ESPACIO_DESCUBIERTO) {
        // Si ya lo abrió, entonces mostramos las minas cercanas
        int minasCercanas = obtenerMinasCercanas(l, m, tablero);
        verdaderaLetra = enteroACaracter(minasCercanas);
      }*/
      // Si DEBUG está en 1, o debería mostrar las minas (porque perdió o ganó)
      // mostramos la mina original
      /*if (letraActual == MINA && (DEBUG || deberiaMostrarMinas)) {
        verdaderaLetra = MINA;
      }
      cout<<"|   "<< verdaderaLetra;
      if (j +1 == COLUMNAS) {
        cout<<" |";
      }
    }
    cout<<"\n";
    imprimirSeparadorFilas();
  }
}

int m(int vec[]) {
  int ptos;
  cout<<"** GENERALA **\nTabla de Puntos\n";
  char tablero[FILAS][COLUMNAS];
  int deberiaMostrarPuntuacion = 0;
  iniciarTablero(tablero);
  imprimirTablero(tablero);
  Puntuacion(vec);
  cout<<"Puntos a guardar: ";
  cin>>ptos;
  switch (ptos){
    case 1:
      tablero[1][1]=;
      imprimirTablero(tablero);
    break;
    case 2:
      //tablero[ptos][1]=
    break;
    case 3:
    break;
    case 4:
    break;
    case 5:
    break;
    case 6:
    break;
    case 7:
    break;
    case 8:
    break;
    case 9:
    break;
    case 10:
    break;

    default:
    break;
  }


return 0;*/

 //}// FUNCIONES_H_INCLUDED
#endif
