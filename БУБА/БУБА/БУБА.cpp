// БУБА.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Drob.h"
int main() {
	
		Drob d(1, 24);
		Drob d1(1, 36);
		Drob c;//какой метод из Drob.h работает в этой строчке?
		cout << "\n defor + \n";
		/*c = d + d1;*/
		c += d;
		cout << c.ch << "/" << c.zn << "\n";
}