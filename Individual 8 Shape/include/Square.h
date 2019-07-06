#ifndef SQUARE_H
#define SQUARE_H
#include "Shape2D.h"
#include "Shape.h"
#include <iostream>
#include<string>

class Square :public Shape2D
{

private:
   double r;
    public:
    Square(string a , double b);
    double Area();
};
#endif // SQUARE_H
