#include "Shape3D.h"
#include "Shape.h"
#include <iostream>
#include<string>
using namespace std;
Shape3D::Shape3D(string x, double y):Shape(x)
{
    r=y;
}
void Shape3D:: setcolor(string c){color=c;}
string Shape3D:: getcolor(){return color;}
