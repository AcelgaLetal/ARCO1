#include "alumn.h"
Alumn::Alumn()
{
    gradesCounter = 0;
}
Alumn::Alumn(string _name, string _surname, string _nif) : Base(_name, _surname, _nif)
{
    gradesCounter = 0;
}

void Alumn::newGrade(int gr)
{
  gradeList.push_back(gr);
  gradesCounter++;
}

vector<int> Alumn::getGrades()
{
  return gradeList;
}

int Alumn::getNumGrades()
{
  return gradesCounter;
}
