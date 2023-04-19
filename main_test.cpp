#include "rhombus.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "start of program" << endl;
	Rhombus alberto(1,1);
	Rhombus sergio = alberto;
	Rhombus carlo(7, 10);
	float A, B;

	cout << "alberto: " << alberto.GetDiagH() << " " << alberto.GetDiagV() << endl;
	alberto.GetDiagonals(A, B);
	cout << "alberto using getDim:" << A << " " << B << endl;
	
	cout << "sergio: " << sergio.GetDiagH() << " " << sergio.GetDiagV() << endl;
	sergio.GetDiagonals(A, B);
	cout << "sergio using getDim:" << A << " " << B << endl;

	cout << "carlo: " << carlo.GetDiagH() << " " << carlo.GetDiagV() << endl;
	carlo.GetDiagonals(A, B);
	cout << "carlo using getDim:" << A << " " << B << endl;

	carlo = alberto;

	cout << "AFTER COPY: carlo: " << carlo.GetDiagH() << " " << carlo.GetDiagV() << endl;
	carlo.GetDiagonals(A, B);
	cout << "carlo using getDim:" << A << " " << B << endl;

	Rhombus carmine(10, 9);
	cout << "carmine: " << carmine.GetDiagH() << " " << carmine.GetDiagV() << endl;
	carmine.GetDiagonals(A, B);
	cout << "carmine using getDim:" << A << " " << B << endl;

	if (carlo == alberto)
		cout << "\n Test for operator ==" << endl;
	if (carlo == carmine)
		cout << "should not print" << endl;

	cout << "\n\n Area of alberto: " << alberto.GetArea() << endl;
	cout << "Perimeter of alberto:" << alberto.GetPerimeter() << endl;

	cout << "\n\n Area of sergio: " << sergio.GetArea() << endl;
	cout << "Perimeter of sergio:" << sergio.GetPerimeter() << endl;

	cout << "\n\n Area of carlo: " << carlo.GetArea() << endl;
	cout << "Perimeter of carlo:" << carlo.GetPerimeter() << endl;

	cout << "\n\n Area of carmine: " << carmine.GetArea() << endl;
	cout << "Perimeter of carmine:" << carmine.GetPerimeter() << endl;


	return 0;
}