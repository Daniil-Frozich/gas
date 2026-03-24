#include "Order.h"
#include <iostream>
#include <cstring>

using namespace std;

Order::Order(const char* p, const char* r, int s)
{
	strcpy_s(payer, 20, p);
	strcpy_s(receiver, 20, r);
	sum = s;
}
Order::Order() {
	payer[0] = '\0';
	receiver[0] = '\0';
	sum = 0;
}

void Order::print() {
	cout << "Platelshik: " << payer << endl;
	cout << "Poluchatel: " << receiver << endl;
	cout << "Summa: " << sum << "rub" << endl;
}

int Order::findTotal(const Order orders[], int size, const char* account) {
	int total = 0;

	for (int i = 0; i < size; i++) {
		if (strcmp(orders[i].payer, account) == 0 ||
			strcmp(orders[i].receiver, account) == 0) {
			total += orders[i].sum;
		}
	}
	return total;
}
