#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>

#include "funciones.h"
#include "partida.h"
#include "rlutil.h"

using namespace std;

void jA1();
void punto5();
void J1();

void cargarVector();

int main() {
    rlutil:: setConsoleTitle("GENERALA");
  bool repite = true;
  int opc;
  while (true) {
    rlutil::setBackgroundColor(5);
    rlutil::cls();
    rlutil::locate(30, 10);
    cout << "---------MENU----------" << endl;
    rlutil::locate(30, 11);
    cout << "1. JUEGO NUEVO DE A 1" << endl;
    rlutil::locate(30, 12);
    cout << "2. JUEGO NUEVO DE A 2" << endl;
    rlutil::locate(30, 13);
    cout << "3. MOSTRAR PUNTUACION TOTAL" << endl;
    rlutil::locate(30, 14);
    cout << "4. MODO TESTEO" << endl;
    rlutil::locate(30, 15);
    cout << "0. SALIR" << endl;
    rlutil::locate(30, 16);
    cout << "-----------------------" << endl;
    rlutil::locate(30, 17);
    cout << "OPCION: ";
    cin >> opc;

    rlutil::cls();
    switch (opc) {
    case 1:
      J1();
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      punto5();

      system("pause");
      break;
    case 0:
      cout << "ADIOS!!" << endl;
      return 0;
      repite = false;
      break;
    }
    repite = true;

    system("pause");
  }
  return 0;
}
