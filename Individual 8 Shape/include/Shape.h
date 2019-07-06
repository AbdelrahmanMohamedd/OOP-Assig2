#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include<string>
using namespace std;
class Shape
{
protected:
    string color;
public:
    Shape();
    Shape(string x);
    virtual void setcolor(string c)=0;
    virtual string getcolor()=0;


};

#endif // SHAPE_H
