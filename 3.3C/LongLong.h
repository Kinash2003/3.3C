//LongLong.h
#pragma once
#include "Object.h"
#include <iostream>
#include <sstream>

#pragma pack(1)

using namespace std;

class LongLong : public Object
{
private:
	double x, y;
public:
	double GetX() const;
	double GetY() const;
	

	void SetX(double value);
	void SetY(double value);
	

	LongLong();
	LongLong(double, double);
	LongLong(const LongLong&);

	LongLong& operator = (const LongLong&);
	friend ostream& operator << (ostream&, const LongLong&);
	friend istream& operator >> (istream&, LongLong&);
	operator string() const;

	LongLong& operator ++ ();
	LongLong& operator -- ();
	LongLong operator ++ (int);
	LongLong operator -- (int);

	friend LongLong operator + (LongLong&, LongLong&);
	friend LongLong operator * (LongLong&, LongLong&);
	
	friend bool operator > (LongLong&, LongLong&);
	friend bool operator < (LongLong&, LongLong&);
	friend bool operator == (LongLong&, LongLong&);

};

