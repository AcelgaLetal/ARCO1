/**
*@author Alejandro Abad Peláez
*@date 18/02/2019
*
* Base
*/
#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <vector>

using namespace std;

class Base
{
  //Atributos de la clase
  private:
    string name;
    string surname;
    string nif;
  //Metodos
  public:
    Base(); //Constructor

    Base(string, string , string); //Constructor sobrecargado

    string getName();
    string getSurname();
    string getNif();

    void setName(string n);
    void setSurname(string n);
    void setNif(string n);
};

#endif
