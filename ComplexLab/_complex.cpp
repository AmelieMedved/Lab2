#include "_complex.h"
#include <math.h>

complex::complex()
{
  Re = 0;
  Im = 0;
}

complex::complex(double Re, double Im)
{
  this->Re = Re;
  this->Im = Im;
}

void complex::SetRe(double Re)
{
  this->Re = Re;
}

double complex::GetRe()
{
  return Re;
}

void complex::SetIm(double Im)
{
  this->Im = Im;
}

double complex::GetIm()
{
  return Im;
}

complex& complex::operator=(const complex& obj)
{
  Re = obj.Re;
  Im = obj.Im;

  return *this;
}

double complex::module()
{
  return double(sqrt((this->Re* this->Re) + (this->Im * this->Im)));
}

double complex::power(int deg)
{
  if (deg >= 0)
  {
    if (deg == 0)
    {
      this->Re = 1;
      this->Im = 0;

    }
    else if (deg == 1)
    {
      return 0.0;
    }
    else
    {
      double temp = pow(this->module(), deg);
      double fi = atan(this->Im / this->Re);
      this->Re = temp * cos(deg * fi);
      this->Im = temp * sin(deg * fi);

    }
  }
  else
  {
      double temp = pow(this->module(), deg);
      double fi = atan(this->Im / this->Re);
      this->Re = temp * cos(deg * fi);
      this->Im = temp * sin(deg * fi);
  }

  return 0.0;
}

double complex::power(double deg)
{
  if (deg >= 0)
  {
    if (deg == 0)
    {
      this->Re = 1;
      this->Im = 0;

    }
    else if (deg == 1)
    {
      return 0.0;
    }
    else
    {
      double temp = pow(this->module(), deg);
      double fi = atan(this->Im / this->Re);
      this->Re = temp * cos(deg * fi);
      this->Im = temp * sin(deg * fi);

    }
  }
  else
  {
    double temp = pow(this->module(), deg);
    double fi = atan(this->Im / this->Re);
    this->Re = temp * cos(deg * fi);
    this->Im = temp * sin(deg * fi);
  }

  return 0.0;
}

const complex operator+(const complex& obj_1,const complex& obj_2)
{
  return complex(obj_1.Re + obj_2.Re, obj_1.Im + obj_2.Im);
}

const complex operator-(const complex& obj_1,const complex& obj_2)
{
  return complex(obj_1.Re - obj_2.Re, obj_1.Im - obj_2.Im);
}

const complex operator*(const complex& obj_1,const complex& obj_2)
{
  complex temp;

  temp.Re = obj_1.Re * obj_2.Re - obj_1.Im * obj_2.Im;
  temp.Im = obj_1.Re * obj_2.Im + obj_2.Re * obj_1.Im;

  return temp;
}

const complex operator/(const complex& obj_1,const complex& obj_2)
{
  complex temp;

  temp.Re = (obj_1.Re * obj_2.Re + obj_1.Im * obj_2.Im) / (obj_2.Re * obj_2.Re + obj_2.Im * obj_2.Im);
  temp.Im = (obj_2.Re * obj_1.Im - obj_1.Re * obj_2.Im) / (obj_2.Re * obj_2.Re + obj_2.Im * obj_2.Im);

  return temp;
}

std::ostream& operator<<(std::ostream& out,const complex& obj)
{
  out << obj.Re << "+" << obj.Im << "i";
  return out;  
}

std::istream& operator>>(std::istream& in, complex& obj)
{
  in >> obj.Im;
  in >> obj.Re;
  return in;
}


bool operator==(const complex& obj_1, const complex& obj_2)
{
  return ((obj_1.Re == obj_2.Im) && (obj_1.Im == obj_2.Im));
}

bool operator!=(const complex& obj_1, const complex& obj_2)
{
  return ((obj_1.Re != obj_2.Im) && (obj_1.Im != obj_2.Im));// or !(obj_1 == obj_2);
}


