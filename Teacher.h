#ifndef TEACHER_H
#define TEACHER_H

#include "Base.h"
#include "Alumn.h"

class Teacher : public Base
{
  private:
    //ListaDeAlumnos
    string alumList[10];
    int alumnCounter = 0;
  public:
    //Constructor
    Teacher(string, string, string);

    //Metodos
    void addAlumn(Alumn a);

    //Metodo sobrecargado-----
    void assignGrade(Alumn a, int gr1);
    void assignGrade(Alumn a, int gr1, int gr2);
    void assignGrade(Alumn a, int gr1, int gr2, int gr3);
    //------------------------

    void averageGrade(Alumn a);
    void printAlumns();
    void pintBestAlumn();
};

#endif
