#include "Circle.h"
#include "Shape2D.h"
#include "Shape.h"
#include <iostream>
#include<string>
using namespace std;
 Circle::Circle(string a , double b) : Shape2D(a,b)
 {
 r=b;
 }
double Circle:: Area()
{
    return r*r*3.14;
}
