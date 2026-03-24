#include <iostream>
#include <fstream>
#include <cstring>
#include "ORDER.h"

using namespace std;

int main()
{
	ifstream in("input.txt");
	if (!in) return 1;

	ORDER gr[10];
	int n = 0;
	
	while (n < 10 && in >> gr[n]) n++;

	for (int i = 0; i < n; i++)
		cout << gr[i] << "\n";

	ofstream of("order.bin", ios::binary);
	of.write((char*)gr, n * sizeof(ORDER));
	of.close;

	ifstream in1("order.bin", ios::binary | ios::ate);

	in1.seekg(0, in1.end);
	int dl_fila = in1.tellg();

	int nZ = dl_fila / sizeof(ORDER);

	in1.seekg(0, 0);

	ORDER* arr = new ORDER[nZ];

	in1.read((char*)arr, nZ * sizeof(ORDER));
	in1.close();

	char schet[20];
	cout << "Vvod schet platelshika: ";
	cin >> schet;

	bool found = false;
	
	for (int i = 0; i < nZ; i++) {
		if (strcmp(arr[i].getPayer(), schet) == 0) {
			cout << "Summa: " << arr[i].getSum() << endl;
			found = true;
		}
	}
	if (!found)
		cout << "Schet ne nayden :(" << endl;

	delete[] arr;

	return 0;
}