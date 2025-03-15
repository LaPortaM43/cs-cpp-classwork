#include "Shape.h"

Shape::Shape()
{
	color = "White";
}
Shape::Shape(string initialCol, Point initialLoc)
{
	color = initialCol;
	location = initialLoc;
}

string Shape::getColor()
{
	return color;
}
Point Shape::getLocation()
{
	return location;
}

void Shape::setColor(string color)
{
	this->color = color;
}
void Shape::move(double deltaX, double deltaY)
{
	double currentX = location.getX();
	double currentY = location.getY();

	double newX = currentX + deltaX;
	double newY = currentY + deltaY;

	location.setX(newX);
	location.setY(newY);
}
void Shape::print()
{
	cout << "Color: " + color;
	location.print();
}