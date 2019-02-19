#include "Alumn.h"

Alumn::Alumn(string _name, string _surname, string _nif) : Base(_name, _surname, _nif){}

int Alumn::getGrades()
{
  return gradesList;
}

int getNumGrades()
{
  return gradesCounter;
}

void newGrade(int gr)
{
  gradesList[gradesCounter] = gr;
  gradesCounter++;
}
