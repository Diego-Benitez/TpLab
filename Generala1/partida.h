#ifndef PARTIDA_H_INCLUDED
#define PARTIDA_H_INCLUDED

#include "rlutil.h"

using namespace std;

bool Unos();
bool Dos();
bool Tres();
bool Cuatro();
bool Cinco();
bool Seis();
void mostrarVector();
void cargarVector();
void punto5();
bool Generala();
void tirada();
bool escalera();
void ordenarVector();
bool isFull();
void Poker();
int contarNumerosRepetidos();
bool poker2();
bool isEscalera();
int Puntuacion();
/// Prueb
bool compararVectores();

int cargar();

void punto5() {
  int vec[5], vT[10];
  int ronda;
  int salir;
  cargarVector(vec, 5);
  //mostrarVector(vec, 5);
  cout << endl;

  Generala(vec);
  // escalera(vec,5);
  isFull(vec);
  Unos(vec);
  Dos(vec);
  Tres(vec);
  Cuatro(vec);
  Cinco(vec);
  Seis(vec);
  Poker(vec);
  escalera(vec, 5);
  cargar(vT);
  Puntuacion(vec, vT);

  // m(vec);

  // contarNumerosRepetidos(vec, 4, 5);
}

void J1() {
  string nombre1;
  int ronda, dados, opcTirada, i;
  int tiradaTotal = 1;
  int salir;
  cout << "Ingresar el nombre: ";
  cin >> nombre1;
  cout << "Cuantas rondas desea jugar? ";
  cin >> ronda;

  for (i = 0; i < ronda; i++) {
    rlutil::cls();
    rlutil::setBackgroundColor(5);
    int vec[5], vT[10];
    int cont = 1;
    rlutil::setColor(15);
    cout <<"TURNO DE "<<nombre1<<"| RONDA Nro: " << i+1 << "|  PUNTAJE TOTAL: " << endl; // Mostraria la tirada Inicial
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<< " TIRADA Nro: "<< cont << " - TIRADAS TOTALES: "<<tiradaTotal<<endl;
    cout<<"------------------------------------------------------------------------"<<endl;
    cargarAleatorio(vec, 5, 6);
   // mostrarVector(vec, 5);
    Generala(vec);
    cargar(vT);
    rlutil::setColor(15);

    cout << "¿Quiere Realizar otra tirada [1]? " << endl;
    cout << "¿Quiere anotar el puntaje obtenido [2]?" << endl;
    cout << "¿Quiere salir de la partida [0]? " << endl;

    // Selecciona el usuario que quiere hacer, faltaria el de anular puntuacion

    cin >> opcTirada;
    switch (opcTirada) {
    case 1:
      cont++;
      tiradaTotal ++;
      tiradaTotal = tirada(cont, opcTirada, vec, vT, tiradaTotal);

      break;
    case 2:
      Puntuacion(vec, vT);

      compararVectores(vec, vT, 10);

      break;
    case 0:
      i = 4;
      break;
    }
  }
  //return 0;
}

void J2() {

  int r, i;
  i = 0;

  /*cout<<"Cuantas rondas desea jugar? ";
  cin>>r;*/

  /// falta mostrar un cauadro cada vez q cambia de turno
  do {

    rlutil::cls();

    if (i % 2 == 0) {
      // jugador1

    } else {
      // jugador2
    }

    i++;
  } while (i <= 3);
}
#endif
