#include "Sphere.h"
#include "Shape3D.h"
#include "Shape.h"
#include <iostream>
#include<string>
using namespace std;

Sphere::Sphere(string x, double y) : Shape3D(x,y)
{
r=y;
}
double Sphere:: Volume()
{
    return (4/3)*3.14*r*r*r;
}
double Sphere:: SurfaceArea()
{
    return 4*3.14*r*r;
}
