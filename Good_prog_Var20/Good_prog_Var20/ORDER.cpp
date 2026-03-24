#include "ORDER.h"
#include <iostream>
#include<cstring>

using namespace std;

ORDER::ORDER(const char* p, const char* r, int s)
{
	strcpy_s(payer, 20, p);
	strcpy_s(receiver, 20, r);
	sum = s;
}

ORDER::ORDER()
{
	payer[0] = '\0';
	receiver[0] = '\0';
	sum = 0;
}

bool ORDER::operator>(ORDER b)
{
	return strcmp(payer, b.payer) > 0;
}

ostream& operator<<(ostream& os, ORDER m)
{
	os << m.payer << " " << m.receiver << " " << m.sum;
	return os;
}

istream& operator>>(istream& is, ORDER& m)
{
	is >> m.payer >> m.receiver >> m.sum;
	return is;
}
