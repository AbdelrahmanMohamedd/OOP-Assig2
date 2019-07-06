#ifndef SHAPE2D_H
#define SHAPE2D_H
#include "Shape.h"
#include <iostream>
#include<string>
using namespace std;

class Shape2D : public Shape
{
protected:
    double r;
public:
    Shape2D(string a, double b);
    void setcolor(string c);
    string getcolor();
    virtual double Area()=0;
};

#endif // SHAPE2D_H
