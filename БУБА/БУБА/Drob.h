#pragma once
#include <fstream>
#include <iostream>
using namespace std;
class Drob
{
private:
	void sokr();
public:
	int ch;
	int zn;
	Drob();
	Drob(int ch, int zn);
	Drob(const Drob&);
	~Drob();
	Drob operator+ (const Drob& a)const;
	Drob operator/(const Drob& a)const;
	Drob operator-(const Drob& a)const;
	Drob operator*(const Drob& a)const;
	Drob& operator=(const Drob& a);
	bool operator<(const Drob& a)const;
	bool operator>(const Drob& a)const;
	Drob& operator+= (const Drob& a);
	friend ostream& operator<<(ostream& os, Drob& d) {
		return os << d.ch << "/" << d.zn;
	}
	friend istream& operator >> (istream& os, Drob& d) {
		return os >> d.ch >> d.zn;
	}
	

};

