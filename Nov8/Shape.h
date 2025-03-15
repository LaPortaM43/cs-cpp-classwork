#pragma once
#include <string>
#include <iostream>
#include "Point.h"
using namespace std;

class Shape
{
private:
	string color;
	Point location;

public:
	Shape();
	Shape(string initialCol, Point initialLoc);

	string getColor();
	Point getLocation();

	void setColor(string color);
	void move(double deltaX, double deltaY);
	virtual void print(); //virtual fun
	virtual double getArea() = 0; //pure virtual fun
	virtual double getPerimeter() = 0;
};

