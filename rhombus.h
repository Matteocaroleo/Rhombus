///@file rhombus.h
///@brief Declaration of the class Rhombus 
/// 
#ifndef RHOMBUS_H
#define RHOMBUS_H

/// @class Rhombus
/// @brief To manage an object with the shape of a rhombus



class Rhombus
{
private:
	int diagonalH;
	int diagonalV;
	double Side();

public:
	Rhombus();
	Rhombus(int dH, int dV);
	Rhombus(const Rhombus& source);
	~Rhombus();

	Rhombus& operator =(const Rhombus& r);
	bool operator == (const Rhombus& r);

	void setDim(int dH, int dV);
	void setDiagonalH(int dH);
	void setDiagonalV(int dV);

	int getDiagonalH();
	int getDiagonalV();
	void getDiagonals(int& dH, int& dV);

	double getArea();
	double getPerimeter();
};











#endif