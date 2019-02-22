#include <iostream>
#include "base.h"
#include "alumn.h"
#include "teacher.h"

using namespace std;
//Protiotipos
void Qualifying();

int main()
{
  Qualifying();
  return 0;
}

void Qualifying()
{
  //Creamos los objetos
  Teacher t1("Jose", "Castrillo", "45903434D");

  Alumn a1("Pepe", "Morla", "45903367F");
  Alumn a2("Alex", "Abad", "71470674D");
  Alumn a3("Santiago", "Calvo", "98765887R");

  t1.addAlumn(a1);
  t1.addAlumn(a2);
  t1.addAlumn(a3);

  t1.assignGrade(a1, 4, 7);
  t1.assignGrade(a2, 10, 10, 8);
  t1.assignGrade(a3, 5, 5, 8);

  t1.printAlumns();
  t1.printBestAlumn();
}
