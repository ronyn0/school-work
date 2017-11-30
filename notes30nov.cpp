// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

class circle
{
private:
	double radius;
public:
	void setRadius(double r) { r > 0 ? radius = r : 0; }
	double getRadius()	{return radius;	}
	double getArea() { return 3.14*pow(radius, 2); }
};
class rectangle
{
private:
	double length;
	double width;
public:
	void setLength(double l) { l > 0 ? length = l : 0; }
	void setWidth(double w) { w > 0 ? width = w : 0; }
	double getLength() { return length; }
	double getWidth() { return width;}
	double getArea() { return length*width; }
};
class carpet
{
private:
	double ppsf;
	Rectangle size;
public:
	void setSize(double l, double w){ size.setLenth(l); size.setWidth(w);}

};
class square
{
private:
	double side;
public:
	void setSide(double s) { s > 0 ? side = s : 0; }
	double getSide() { return side;}
	double getArea() { return side*side; }
};

int main()
{
	circle c1, c2;
	c1.setRadius(5);
	c2.setRadius(3.1111);
	
	cout << c1.getArea() << endl;

	rectangle r1;
	r1.setLength(3);
	r1.setWidth(4);

	cout << r1.getArea() << endl;
    return 0;
}

