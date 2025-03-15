#include <iostream>
#include "Circle.h"
#include "Point.h"
#include "Rectangle.h"
using namespace std;

void moveShape(Shape& obj, double x, double y)
{
	obj.move(x, y);
}

void printShape(Shape& obj)
{
	obj.print();
	cout << endl;
	cout << "Area: " << obj.getArea()
		<< ", Perimeter: "
		<< obj.getPerimeter();
}

void printShape(Shape* obj)
{
	obj->print();
	cout << endl;
	cout << "Area: " << obj->getArea()
		<< ", Perimeter: "
		<< obj->getPerimeter();
}

Shape* smallerShape(Shape* s1, Shape* s2)
{
	if (s1->getArea() < s2->getArea())
	{
		return s1;
	}
	else return s2;
}

double largestArea(Shape* shapes[], int size)
{
	double result = shapes[0]->getArea();
	for (int i = 1; i < size; i++)
	{
		if (shapes[i]->getArea() > result)
		{
			result = shapes[i]->getArea();
		}
	}
	return result;
}

int main()
{
	
	Circle cir1;
	cir1.print();
	
	cir1.setColor("Red");
	cir1.move(5, 6);

	cir1.print();

	Circle c2(100, Point(1.1, 0.1), "Blue");
	c2.print();

	cout<<"\n\n For Polymorphsim:\n";
	moveShape(c2, 100, 100);
	c2.print();

	/* not able to create an object from an abstract class
	Shape obj;
	moveShape(obj, 2, 3);
	cout << endl;
	obj.print();
	*/
	printShape(c2);
	cout << "\n call the overloaded function:\n";
	printShape(&cir1);

	Rectangle rt(2, 3, "Pink", Point(200, 400));
	printShape(rt);

	Shape* smallerObj = smallerShape(&c2, &rt);
	cout <<"Smaller shape between c2 and rt: "<< endl;
	printShape(smallerObj);

	cout << "Compare three shapes' area:\n";
	Shape* shapes[3] = { &cir1, &c2, &rt };
	cout << "Among three shapes, the largest area: "
		<< largestArea(shapes, 3);
;	return 0;
}