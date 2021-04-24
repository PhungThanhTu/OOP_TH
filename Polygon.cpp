#include "Polygon.h"
#include "Point.h"
#include<math.h>
#include<iostream>
using namespace std;
void Polygon::enter() {
	cout << " Amount of peak : ";
	cin >> this->n;
	points = new Point[n];

	for (int i = 0; i < n; i++)
	{
		points[i].enter();
	}
}
void Polygon::display(){
	for (int i = 0; i < n; i++)
	{
		points[i].display();
		cout << " ";
	}
}
void Polygon::translate(double dx, double dy){
	for (int i = 0; i < n; i++)
	{
		points[i].translate(dx, dy);
}
}
void Polygon::zoomIn(double size){
	for (int i = 0; i < n; i++)
	{
		points[i].coordX *= size;
		points[i].coordY *= size;
	}
}
void Polygon::zoomOut(double size){
	for (int i = 0; i < n; i++)
	{
		points[i].coordX /= size;
		points[i].coordY /= size;
	}
}
Polygon::Polygon(const Polygon& obj)
{
	n = obj.n;
	points = new Point[obj.n];
	for (int i = 0; i < n; i++)
		points[i] = obj.points[i];
}