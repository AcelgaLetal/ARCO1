#ifndef TEACHER_H
#define TEACHER_H

#include <vector>

#include "base.h"
#include "alumn.h"

class Teacher : public Base
{
  private:
    //ListaDeAlumnos
    vector<Alumn> alumnList;
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

    float averageGrade(Alumn a);
    void printAlumns();
    void printBestAlumn();
};

#endif
