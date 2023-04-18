#include "rhombus.h"
#include <iostream>
#include <cmath>

using namespace std;

/// @brief Default constructor
Rhombus::Rhombus()
{
	diagonalH = 1;
	diagonalV = 1;
	cout << "Default constructor - invoked" << endl;
}

/// @brief  Overload of constructor
/// @param dH  Horizontal diagonal
/// @param dV  Vertical diagonal
Rhombus::Rhombus(int dH, int dV)
{
	setDiagonalH(dH);
	setDiagonalV(dV);
	
}
/// @brief Copy constructor
/// @param source Object from which to copy 
Rhombus::Rhombus(const Rhombus& source)
{
	cout << "Copy constructor - invoked" << endl;
	diagonalH = source.diagonalH;
	diagonalV = source.diagonalV;
}

/// @brief Destructor
Rhombus::~Rhombus()
{
	cout << "Destructor - invoked" << endl;
}

/// @brief Overload of "=" operator, copies the diagonals of two objects
/// @param r Right operand
/// @return Left operand
Rhombus& Rhombus::operator=(const Rhombus& r)
{
	diagonalH = r.diagonalH;
	diagonalV = r.diagonalV;
	return *this;
}

/// @brief Overload of "==" operator, checks if the diagonals of two objects are equal
/// @param r Right operand
/// @return Left operand
bool Rhombus::operator==(const Rhombus& r)
{
	if (diagonalH == r.diagonalH && diagonalV == r.diagonalV)
		return true;
	return false;
}
/// @brief Modify a new horizontal diagonal
/// @param dH New value of horizontal diagonal
void Rhombus::setDiagonalH(int dH)
{
	if (dH < 0)
		cout << "ERROR: Cannot set a diagonal to a negative number." << endl;
	else if (dH == 0)
		cout << "ERROR: Cannot set a diagonal to zero." << endl;
	else
		diagonalH = dH;
}

/// @brief Modify a new vertical diagonal
/// @param dV New value of vertical diagonal
void Rhombus::setDiagonalV(int dV)
{
	if (dV < 0)
		cout << "ERROR: Cannot set a diagonal to a negative number." << endl;
	else if (dV == 0)
		cout << "ERROR: Cannot set a diagonal to zero." << endl;
	else
		diagonalV = dV;
}

/// @brief Modify both horizontal and vertical diagonals
/// @param dH New value of horizontal diagonal
/// @param dV New value of vertical diagonal
void Rhombus::setDim(int dH, int dV)
{
	setDiagonalH(dH);
	setDiagonalV(dV);
}

/// @brief Gets the value of horizontal diagonal
/// @return The value of horizontal diagonal 
int Rhombus:: getDiagonalH()
{
	return diagonalH;
}

/// @brief Gets the value of vertical diagonal
/// @return The value of vertical diagonal 
int Rhombus::getDiagonalV()
{
	return diagonalV;
}

/// @brief Writes the value of both diagonal in two memory locations
/// @param dH memory location of horizontal diagonal
/// @param dV memory location of vertical diagonal
void Rhombus::getDiagonals(int& dH, int& dV)
{
	dH = diagonalH;
	dV = diagonalV;
}

/// @brief Computes the side of the rhombus given the two diagonals
/// @return Side
double Rhombus::Side()
{
	float x = ((float)diagonalH / 2)*((float)diagonalH/2) + ((float)diagonalV / 2)*((float)diagonalV/2);
	return sqrt(x);
}

/// @brief Computes the permieter of a rhombus given the two diagonals
/// @return Perimeter
double Rhombus::getPerimeter()
{
	return Side() * 4;
}

/// @brief Computes the area of a rhombus
/// @return Area
double Rhombus::getArea()
{
	return ((float)diagonalH * (float)diagonalV) / 2;
}
