#pragma once
#include"Point.h"
class Polygon
{
	int n;
	Point *points;
public:
	Polygon(int count = 3)
	{	
		n = count;
		points = new Point[n];
}
	Polygon(const Polygon& obj);
	~Polygon()
	{
		delete []points;
	}
	void enter();
	void display();
	void translate(double dx, double dy);
	void zoomIn(double size);
	void zoomOut(double size);
};

