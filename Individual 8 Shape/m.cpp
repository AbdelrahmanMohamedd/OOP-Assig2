#include <iostream>
#include<string>
#include "Shape.h"
#include "Shape2D.h"
#include "Shape3D.h"
#include "Circle.h"
#include "Square.h"
#include "Sphere.h"
#include "Cylinder.h"
using namespace std;

int main()
{
     //Shape* s1 = new Shape2D("red");
    Shape2D* s1= new Square("red",5);
    cout<<"The Area of Square : "<<s1->Area()<<endl;
    Shape2D* s2= new Circle("black",2);
    cout<<"The Area of Circle : "<<s2->Area()<<endl;
    Shape3D* s3 = new Sphere("Blue" , 10);
    cout <<"The Volume of Sphere  : "<< s3->Volume()<<endl;
    cout <<"The SurfaceArea of Sphere : "<< s3->SurfaceArea()<<endl;
    Shape3D* s4 = new Cylinder("Blue" , 5,10);
    cout <<"The Volume of Cylinder : "<< s4->Volume()<<endl;
    cout <<"The SurfaceArea of Cylinder : "<< s4->SurfaceArea()<<endl;
    return 0;
}
