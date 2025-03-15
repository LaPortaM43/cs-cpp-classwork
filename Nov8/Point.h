//#pragma once
#ifndef POINT_H
#define POINT_H

class Point
{
private:
	double x, y;

public:
	Point();
	Point(double initX, double initY);

	void setX(double newX);
	double getX();

	void setY(double newY);
	double getY();

	void print();
};



#endif // !POINT_H

