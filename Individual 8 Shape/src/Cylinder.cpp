#include "Cylinder.h"
#include "Shape3D.h"
#include "Shape.h"
#include <iostream>
#include<string>
using namespace std;

Cylinder::Cylinder(string x, double y,double z) : Shape3D(x,y){r=y; h=z;}
double Cylinder:: Volume()
{
    return 3.14*r*r*h;
}
double Cylinder:: SurfaceArea()
{
    return ((2*3.14*r*r)+(2*3.14*r*h));
}
