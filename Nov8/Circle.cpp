#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle():Shape()
{
	radius = 1.0;
}

Circle::Circle(double initialR):Shape()
{
	radius = initialR > 0 ? initialR : 1.0;
}

double Circle::getRadius()
{
	return radius;
}

void Circle::setRadius(double newR)
{
	radius = newR > 0 ? newR : radius;
}

void Circle::print()
{
	cout << "Circle object with a radius "
		<< radius ;
	Shape::print();
	//center.print();
	cout << endl;
}

Circle::Circle(double initialR, Point center, string color):Shape(color,center)
{
	radius = initialR;
	//this->center = center;
}

/*
Point Circle::getCenter()
{
	return center;
}
void Circle::setCenter(Point newCenter)
{
	center = newCenter;
}
*/
Circle::~Circle()
{
	cout << "Circle object is deleted!\n";
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}
double Circle::getPerimeter()
{
	return 2 * 3.14 * radius;
}