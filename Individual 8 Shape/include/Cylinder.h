#ifndef CYLINDER_H
#define CYLINDER_H
#include "Shape3D.h"
#include "Shape.h"
#include <iostream>
#include<string>
using namespace std;


class Cylinder :public Shape3D
{
    private:
        double r ,h;
    public:
        Cylinder(string x, double y,double z);
        double Volume();
    double SurfaceArea();

};

#endif // CYLINDER_H
