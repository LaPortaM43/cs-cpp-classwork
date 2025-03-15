#include "Rectangle.h"

Rectangle::Rectangle():Shape()
{
	width = 1;
	height = 1;
}
Rectangle::Rectangle(double initW, double initH,
	string initC, Point topLeftCorner):
	Shape(initC,topLeftCorner )
{
	width = initW;
	height = initH;
}

double Rectangle::getWidth()
{
	return width;
}
double Rectangle::getHeight()
{
	return height;
}

void Rectangle::setWidth(double newW)
{
	width = newW > 0 ? newW : width;
}
void Rectangle::setHeight(double newH)
{
	height = newH > 0 ? newH : height;
}

void Rectangle::print()
{
	cout << "Rectangel object with width: "
		<< width << ", height: " << height;
	Shape::print();
}

double Rectangle::getArea()
{
	return width * height;
}
double Rectangle::getPerimeter()
{
	return 2 * (width + height);
}