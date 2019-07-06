#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape2D.h"
#include "Shape.h"
#include <iostream>
#include<string>
using namespace std;

class Circle : public Shape2D
{
private:
   double r;
    public:
     Circle(string a , double b);
    double Area();
};

#endif // CIRCLE_H
