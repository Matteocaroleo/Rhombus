#include "rhombus.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "start of program" << endl;
	Rhombus alberto(1,1);
	Rhombus sergio = alberto;
	Rhombus carlo(7, 10);
	int A, B;

	cout << "alberto: " << alberto.getDiagonalH() << " " << alberto.getDiagonalV() << endl;
	alberto.getDiagonals(A, B);
	cout << "alberto using getDim:" << A << " " << B << endl;
	
	cout << "sergio: " << sergio.getDiagonalH() << " " << sergio.getDiagonalV() << endl;
	sergio.getDiagonals(A, B);
	cout << "sergio using getDim:" << A << " " << B << endl;

	cout << "carlo: " << carlo.getDiagonalH() << " " << carlo.getDiagonalV() << endl;
	carlo.getDiagonals(A, B);
	cout << "carlo using getDim:" << A << " " << B << endl;

	carlo = alberto;

	cout << "AFTER COPY: carlo: " << carlo.getDiagonalH() << " " << carlo.getDiagonalV() << endl;
	carlo.getDiagonals(A, B);
	cout << "carlo using getDim:" << A << " " << B << endl;

	Rhombus carmine(10, 9);
	cout << "carmine: " << carmine.getDiagonalH() << " " << carmine.getDiagonalV() << endl;
	carmine.getDiagonals(A, B);
	cout << "carmine using getDim:" << A << " " << B << endl;

	if (carlo == alberto)
		cout << "\n Test for operator ==" << endl;
	if (carlo == carmine)
		cout << "should not print" << endl;

	cout << "\n\n Area of alberto: " << alberto.getArea() << endl;
	cout << "Perimeter of alberto:" << alberto.getPerimeter() << endl;

	cout << "\n\n Area of sergio: " << sergio.getArea() << endl;
	cout << "Perimeter of sergio:" << sergio.getPerimeter() << endl;

	cout << "\n\n Area of carlo: " << carlo.getArea() << endl;
	cout << "Perimeter of carlo:" << carlo.getPerimeter() << endl;

	cout << "\n\n Area of carmine: " << carmine.getArea() << endl;
	cout << "Perimeter of carmine:" << carmine.getPerimeter() << endl;


	return 0;
}