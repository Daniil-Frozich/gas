#pragma once
class Order
{
private:
	char payer[20];
	char receiver[20];
	int sum;
public:
	Order(const char*, const char*, int);
	Order();
	void print();

	static int findTotal(const Order orders[], int size, const char* account);
};

