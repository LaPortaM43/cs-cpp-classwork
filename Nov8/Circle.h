#pragma once
#include "Point.h"
#include "Shape.h"
#include <string>
using namespace std;

class Circle:public Shape
{
private:
	double radius;
	//Point center;
public:
	Circle();
	Circle(double initialR);
	double getRadius();
	void setRadius(double newR);
	void print();

	Circle(double initialR, Point center, string color);
	//Point getCenter();
	//void setCenter(Point newCenter);

	~Circle();

	double getArea();
	double getPerimeter();
};

