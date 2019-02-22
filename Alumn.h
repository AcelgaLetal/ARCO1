#ifndef ALUMN_H
#define ALUMN_H

#include "base.h"

class Alumn : public Base
{
  private:
    vector<int> gradeList;
    int gradesCounter = 0;
  public:
    Alumn();
    Alumn(string, string, string);

    vector<int> getGrades();
    int getNumGrades();
    void newGrade(int gr);
};

#endif
