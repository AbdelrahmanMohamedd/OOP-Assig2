#include "Shape2D.h"
#include "Shape.h"
#include <iostream>
#include<string>
using namespace std;

Shape2D::Shape2D(string a , double b) :Shape(a)
{
r=b;
}
void Shape2D:: setcolor(string c){color = c;}
string Shape2D:: getcolor(){return color;}
