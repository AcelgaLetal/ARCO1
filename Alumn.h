#ifndef ALUMN_H
#define ALUMN_H

#include "Base.h"

class Alumn : public Base
{
  private:
    int gradesList[10];
    int gradesCounter = 0;
  public:
    Alumn(string, string, string);

    int getGrades();
    int getNumGrades();
    void newGrade(int gr);
};

#endif
