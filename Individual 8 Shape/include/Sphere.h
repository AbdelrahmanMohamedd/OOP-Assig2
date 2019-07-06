#ifndef SPHERE_H
#define SPHERE_H
#include "Shape3D.h"
#include "Shape.h"
#include <iostream>
#include<string>
using namespace std;


class Sphere :public Shape3D
{
    private:
        double r;
    public:
    Sphere(string x, double y);
    double Volume();
    double SurfaceArea();


};

#endif // SPHERE_H
