#include "MyString.h"
#include <string.h>
MyString::MyString()
{
	this->str = NULL;
	n = 0;
}

MyString::MyString(int n)
{
	this->n = n;
	str = new char [n + 1] {'\0'};
}

MyString::MyString(const char* s)
{
	this->n = strlen(s);
	str = new char[n + 1];
	strcpy_s(str, n+1, s);
}

MyString::MyString(const MyString& s)
{
	this->n = s.n;
	str = new char[n + 1];
	strcpy_s(str, n + 1, s.str);
}

MyString& MyString::operator=(const MyString& s)
{
	this->~MyString();
	this->n = s.n;
	this->str = new char[n + 1];
	strcpy_s(str, n + 1, s.str);
	return *this;
}

MyString::~MyString()
{
	delete[]str;
	n = 0;
}
