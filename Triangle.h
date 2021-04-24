#pragma once
#include"Point.h"
class Triangle
{
	Point A;
	Point B;
	Point C;
public:
	Triangle(){}
	~Triangle(){}
	void enter();
	void display();
	void translate(double dx, double dy);
	void zoomIn(double size);
	void zoomOut(double size);
};

