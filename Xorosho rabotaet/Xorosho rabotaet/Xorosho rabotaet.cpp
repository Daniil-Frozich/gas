
// Xorosho rabotaet.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "MyString.h"
int& f(int& a) {
    return a;
}

int main()
{
    int a;
    f(a) = 2;
    /*cout << "    a = " << a;
    MyString s = "I love you";
    MyString s1 = s;
    MyString s2;
    s2 = s1;
    cout << s2<<"\n";*/
}

