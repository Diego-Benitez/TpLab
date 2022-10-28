#include <iostream>
#include <ctime>
#include "rlutil.h"
#include "dados.h"
using namespace std;


int main() {
  srand(time(0));
  rlutil::hidecursor();

  for (int num = 1; num <= 6; num++) {
    dibujarDado(num*10, 5 + rand() % 4, rand()%6 + 1);
  }
  
  rlutil::setBackgroundColor(0);

  rlutil::anykey();
  return 0;
