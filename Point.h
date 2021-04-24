#pragma once
class Point
{
private:
	double coordX;
	double coordY;
public: 
	Point(double x = 0, double y = 0) {
		coordX = x;
		coordY = y;
	}
	~Point()
	{}
	double X();
	double Y();
	void enter();
	void display();
	void translate(double dx, double dy);
	void rotate(double rad);
	friend class Triangle;
	friend class Polygon;
};

