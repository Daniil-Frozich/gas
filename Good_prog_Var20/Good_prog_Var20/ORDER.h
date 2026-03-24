#pragma once
class ORDER
{
	char payer[20];
	char receiver[20];
	int sum;
public:
	ORDER(const char* p, const char* r, int s);
	ORDER();

	int getSum() { return sum; }
	char* getPayer() { return payer; }

	bool operator>(ORDER b);

	friend ostream& operator<<(ostream& os, ORDER m);
	friend istream& operator>>(istream& is, ORDER& m);
};

