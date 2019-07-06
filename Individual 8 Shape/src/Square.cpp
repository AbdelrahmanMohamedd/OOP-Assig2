#include "Square.h"
#include "Shape2D.h"
#include "Shape.h"
#include <iostream>
#include<string>

Square::Square(string a , double b) :Shape2D(a,b) {
r=b;
}
double Square:: Area()
{
    return r*r;
}
