#include "Teacher.h"

Teacher::Teacher(string _name, string _surname, string _nif) : Base(_name, _surname, _nif)
{

}

void Teacher::addAlumn(Alumn a)
{
  alumnList.push_back(a);
  alumnCounter++;
}

//---------------------------------
void Teacher::assignGrade(Alumn a, int gr1)
{
  a.newGrade(gr1);
}
void Teacher::assignGrade(Alumn a, int gr1, int gr2)
{
  a.newGrade(gr1);
  a.newGrade(gr2);
}
void Teacher::assignGrade(Alumn a, int gr1, int gr2, int gr3)
{
  a.newGrade(gr1);
  a.newGrade(gr2);
  a.newGrade(gr3);
}
//---------------------------------

float Teacher::averageGrade(Alumn a)
{
  vector<int> grades;
  int sum = 0.0;
  float avg = 0.0;

  grades = a.getGrades();

  for(int i = 0; i < a.getNumGrades(); i++)
  {
    sum += grades[i]; //grades[i];
  }

  avg = sum / a.getNumGrades();

  return avg;
}

void Teacher::printAlumns()
{
  for(int i = 0; i < alumnCounter; i++)
  {
      cout<<alumnList[i].getName()<<endl;
  }
}

void Teacher::printBestAlumn()
{
 float bestGrade = 0.0;
 float aux = 0.0;
 Alumn bestAlumn;

 for(int i; i < alumnCounter; i++)
 {
    aux = averageGrade(alumnList[i]);

    if(aux > bestGrade)
    {
      bestGrade = aux;
      bestAlumn = alumnList[i];
    }
 }

 cout<<"The best alumn is "<<bestAlumn.getName()<<endl;
}
