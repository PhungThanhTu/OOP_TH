#include "Point.h"
#include<math.h>
#include<iostream>
using namespace std;
double Point::X()
{
	return coordX;
}
double Point::Y()
{
	return coordY;
}
void Point::display()
{
	cout << "(" << coordX << "," << coordY << ")";
}
void Point::enter()
{
	double x, y;
	cout << "\n Enter x and y coordinator : ";
	cin >> x >> y;
	coordX = x;
	coordY = y;
}
void Point::translate(double dx, double dy)
{
	coordX += dx;
	coordY += dy;
}
void Point::rotate(double rad)
{
	double x = coordX;
	double y = coordY;
	coordX = x * cos(rad) - y * sin(rad);
	coordY = x * sin(rad) + y * cos(rad);
}
