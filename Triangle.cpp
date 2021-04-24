#include "Triangle.h"
#include "Point.h"
#include<math.h>
#include<iostream>
using namespace std;
void Triangle::enter() {
	
	cout << " A :"; A.enter();
	cout << " B : "; B.enter();
	cout << " C : "; C.enter();
}
void Triangle::display(){
	cout << "A"; A.display();
	cout << "B"; B.display();
	cout << "C"; C.display();
}
void Triangle::translate(double dx, double dy){
	A.translate(dx, dy);
	B.translate(dx, dy);
	C.translate(dx, dy);
}
void Triangle::zoomIn(double size){
	A.coordX *= size;
	A.coordY *= size;
	B.coordX *= size;
	B.coordY *= size;
	C.coordX *= size;
	C.coordY *= size;
}
void Triangle::zoomOut(double size){
	A.coordX /= size;
	A.coordY /= size;
	B.coordX /= size;
	B.coordY /= size;
	C.coordX /= size;
	C.coordY /= size;
}