#pragma once
#include <iostream>

class complex
{
private:
  double Re;
  double Im;
  
public:
  complex();
  complex(double Re, double Im);
  void SetRe(double Re);
  double GetRe();
  void SetIm(double Im);
  double GetIm();
  double module();
  double power(int deg);
  double power(double deg);

  //operators:

  complex& operator = (const complex& obj);
  friend bool operator==(const complex& obj_1, const complex& obj_2);
  friend bool operator!=(const complex& obj_1, const complex& obj_2);
  friend const complex operator+(const complex& obj_1,const complex& obj_2);
  friend const complex operator-(const complex& obj_1,const complex& obj_2);
  friend const complex operator*(const complex& obj_1,const complex& obj_2);
  friend const complex operator/(const complex& obj_1,const complex& obj_2);
  friend std::ostream& operator <<(std::ostream& out,const complex& obj);
  friend std::istream& operator >> (std::istream& in, complex& obj);

};