#include "Point.h"
#include <iostream>
using namespace std;

Point::Point()
{
	x = y = 0;
}
Point::Point(double initX, double initY)
{
	x = initX;
	y = initY;
}

void Point::setX(double newX)
{
	x = newX;
}
double Point::getX()
{
	return x;
}

void Point::setY(double y)
{
	this->y = y;
}
double Point::getY()
{
	return this->y;
}

void Point::print()
{
	cout << "(" << x << ", " << y << ")";
}