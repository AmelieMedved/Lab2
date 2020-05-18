#include <iostream>
#include "_complex.h"

int main()
{
  complex value(1, 3);

  std::cout << value.module() << std::endl;
  value.power(-2.1123234);
  std::cout << value.GetRe() << "+" << "(" <<value.GetIm() << ")" << std::endl;
  value.power(2);
  std::cout << value.GetRe() << "+" << "(" << value.GetIm() << ")" <<std::endl;
  value.power(-2);
  std::cout << value.GetRe() << "+" << "(" << value.GetIm() << ")" << std::endl;

  complex obj_1(sqrt(3),sqrt(1));
  complex obj_2(obj_1);

  obj_1 = obj_1 + obj_2;

  std::cout << obj_1.GetRe()<< "+" << obj_1.GetIm() << std::endl;

  obj_1 = obj_2;

  std::cout << obj_1.GetRe() << "+" << obj_1.GetIm() << std::endl;

  if (obj_2 == obj_1)
  {
    std::cout << "ne raven tochno poetomy else" << std::endl;
  }
  else
  {
    std::cout << "obj_1 != obj_2" << std::endl;
  }

  complex c1, c2, c3;

  c1.SetIm(4);
  c1.SetRe(4);
  c2.SetRe(2);
  c2.SetRe(2);
  c3.SetIm(3);
  c3.SetRe(3);

  c3 = c2 + c1;

  return 0;
}