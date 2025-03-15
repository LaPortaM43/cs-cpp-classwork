#pragma once
#include "Shape.h"
#include "Point.h"
#include <string>
using namespace std;

class Rectangle:public Shape
{
private:
	double width, height;
public:
	Rectangle();
	Rectangle(double initW, double initH,
		string initC, Point topLeftCorner);

	double getWidth();
	double getHeight();

	void setWidth(double newW);
	void setHeight(double newH);

	void print();
	double getArea();
	double getPerimeter();
};

