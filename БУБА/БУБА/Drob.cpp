#include "Drob.h"

void Drob::sokr()
{
	int ch = this->ch;
	int zn = this->zn;
	while (ch != zn) {
		if (zn > ch)zn-=ch;
		else ch-=zn;
	}
	this->ch /= ch;
	this->zn /= zn;
}

Drob::Drob()
{
	std::cout << "\nconstuructor empty\n";
	ch = 0; zn = 1;
}

Drob::Drob(int ch, int zn)
{
	std::cout << "\nconstuructor param\n";
	this->ch = ch;
	this->zn = zn;
}

Drob::Drob(const Drob& d)
{
	std::cout << "\nconstructor copy\n";
	this->ch = d.ch;
	this->zn = d.zn;

}

Drob::~Drob()
{

}

Drob Drob::operator+(const Drob& a) const
{
	Drob d;
	d.ch = this->ch * a.zn + a.ch * this->zn;
	d.zn = this->zn * a.zn;
	d.sokr();
	return d;
}



Drob Drob::operator/(const Drob& a)const
{
	if (a.ch == 0) throw("\ndivision by zero");
	Drob d;
	d.ch = this->ch * a.zn;
	d.zn = this->zn * a.ch;
	d.sokr();
	return d;
}

Drob Drob::operator-(const Drob& a)const
{
	Drob d;
	d.ch = this->ch * a.zn - a.ch * this->zn;
	d.zn = this->zn * a.ch;
	d.sokr();
	return d;
}

Drob Drob::operator*(const Drob& a)const
{
	if (a.ch == 0)throw("\n 0");
	Drob d;
	d.ch = this->ch * a.ch;
	d.zn = this->zn * a.zn;
	d.sokr();
	return d;
}

Drob& Drob::operator=(const Drob& a)
{
	this->ch = a.ch;
	this->zn = a.zn;
	return *this;
}

bool Drob::operator<(const Drob& a)const{
	return this->ch * a.zn < a.ch * this->zn;
}
bool Drob::operator>(const Drob& a)const {
	return this->ch * a.zn > a.ch * this->zn;
}

Drob& Drob::operator+=(const Drob& a)
{
	int temp_ch = this->ch;
	int temp_zn = this->zn;
	this->zn = temp_zn * a.zn;
	this->ch = (temp_ch * a.zn) + (a.ch * temp_zn);
	return *this;
}
