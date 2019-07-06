#ifndef SHAPE3D_H
#define SHAPE3D_H
#include "Shape.h"
#include <iostream>
#include<string>

class Shape3D : public Shape
{
protected:
    double r;
public:

    Shape3D(string x, double y);
    void setcolor(string c);
    string getcolor();
    virtual double Volume()=0;
    virtual double SurfaceArea()=0;


};

#endif // SHAPE3D_H
