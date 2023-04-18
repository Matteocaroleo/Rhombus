///@file rhombus.h
///@brief Declaration of the class Rhombus 
/// 
#ifndef RHOMBUS_H
#define RHOMBUS_H

class Rhombus
{
private:
	int diagonalH;
	int diagonalV;
	float Side();
public:
	Rhombus();
	Rhombus(int dH, int dV);
	Rhombus(const Rhombus& source);
	~Rhombus();

	Rhombus& operator =(const Rhombus& r);
	bool operator == (const Rhombus& r);


};









#endif