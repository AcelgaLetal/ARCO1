#include "Teacher.h"

Teacher::Teacher(string _name, string _surname, _string _nif) : Base(_name, _surname, _nif){}

void Teacher::addAlumn(Alumn a)
{
  alumnList[alumnCounter] = a;
  alumnCounter++;
}

//---------------------------------
void assignGrade(Alumn a, int gr1)
{
  a.newGrade(gr1);
}
void assignGrade(Alumn a, int gr1, int gr2)
{
  a.newGrade(gr1);
  a.newGrade(gr2);
}
void assignGrade(Alumn a, int gr1, int gr2, int gr3)
{
  a.newGrade(gr1);
  a.newGrade(gr2);
  a.newGrade(gr3);
}
//---------------------------------

void averageGrade(Alumn a)
{
  int grades[10];
  int sum;
  float avg;

  grades = a.getGrades();

  for(int i = 0; i < a.getNumGrades(); i++)
  {
    sum += grades[i];
  }

  avg = sum / a.getNumGrades();
}

void printAlumns()
{
  for(int i = 0; i < alumnCounter; i++)
  {
    cout<<" "<<alumnList[i]<<enld;
  }
}

void printBestAlumn()
{
 int bestGrade = 0;
 int aux = 0;
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
