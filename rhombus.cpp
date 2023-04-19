#include "rhombus.h"
#include <iostream>
#include <cmath>

using namespace std;

/// @brief Default constructor
Rhombus::Rhombus()
{
	diagH = 1;
	diagV = 1;
	cout << "Default constructor - invoked" << endl;
}

/// @brief  Overload of constructor
/// @param dH  Horizontal diagonal
/// @param dV  Vertical diagonal
Rhombus::Rhombus(float dH, float dV)
{
	SetDiagH(dH);
	SetDiagV(dV);
	
}
/// @brief Copy constructor
/// @param source Object from which to copy 
Rhombus::Rhombus(const Rhombus& r)
{
	cout << "Copy constructor - invoked" << endl;
	diagH = r.diagH;
	diagV = r.diagV;
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
	diagH = r.diagH;
	diagV = r.diagV;
	return *this;
}

/// @brief Overload of "==" operator, checks if the diagonals of two objects are equal
/// @param r Right operand
/// @return Left operand
bool Rhombus::operator==(const Rhombus& r)
{
	if (diagH == r.diagH && diagV == r.diagV)
		return true;
	return false;
}
/// @brief Modify a new horizontal diagonal
/// @param dH New value of horizontal diagonal
void Rhombus::SetDiagH(float dH)
{
	if (dH < 0)
		cout << "ERROR: Cannot set a diagonal to a negative number." << endl;
	else if (dH == 0)
		cout << "ERROR: Cannot set a diagonal to zero." << endl;
	else
		diagH = dH;
}

/// @brief Modify a new vertical diagonal
/// @param dV New value of vertical diagonal
void Rhombus::SetDiagV(float dV)
{
	if (dV < 0)
		cout << "ERROR: Cannot set a diagonal to a negative number." << endl;
	else if (dV == 0)
		cout << "ERROR: Cannot set a diagonal to zero." << endl;
	else
		diagV = dV;
}

/// @brief Modify both horizontal and vertical diagonals
/// @param dH New value of horizontal diagonal
/// @param dV New value of vertical diagonal
void Rhombus::SetDim(float dH, float dV)
{
	SetDiagH(dH);
	SetDiagV(dV);
}

/// @brief Gets the value of horizontal diagonal
/// @return The value of horizontal diagonal 
float Rhombus:: GetDiagH()
{
	return diagH;
}

/// @brief Gets the value of vertical diagonal
/// @return The value of vertical diagonal 
float Rhombus::GetDiagV()
{
	return diagV;
}

/// @brief Writes the value of both diagonal in two memory locations
/// @param mem_dH memory location of horizontal diagonal
/// @param mem_dV memory location of vertical diagonal
void Rhombus::GetDiagonals(float& mem_dH, float& mem_dV)
{
	mem_dH = diagH;
	mem_dV = diagV;
}

/// @brief Computes the side of the rhombus given the two diagonals
/// @return Side
float Rhombus::Side()
{
	float x = (diagH / 2)*(diagH/2) + (diagV / 2)*(diagV/2);
	return sqrt(x);
}

/// @brief Computes the permieter of a rhombus given the two diagonals
/// @return Perimeter
float Rhombus::GetPerimeter()
{
	return Side() * 4;
}

/// @brief Computes the area of a rhombus
/// @return Area
float Rhombus::GetArea()
{
	return (diagH * diagV) / 2;
}
