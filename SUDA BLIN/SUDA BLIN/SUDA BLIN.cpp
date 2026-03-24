#include <iostream>
int sum(int a, int b) {
	return a + b;
}
int diviz(int a, int b) {
	return a / b;
}
int mult(int a, int b) {
	return a * b;
}
int sub(int a, int b) {
	return a - b;
}
int calc(int* arr, int n, int s, int (*f)(int, int)) {
	for (int i = 0; i < n; ++i) {
		s = f(s, arr[i]);
		return s;
	}
}
int execute(int a, int b, int (*f)(int, int)) {
	return f(a, b);
}
int main() {
	int(*f)(int, int) = NULL;
	int a, b;
	char c;
	std::cin << a << c << b;
	switch (c) {
	case'+':f = sum; break;
	case'-':f = sub; break;
	case'*':f = mult; break;
	case'/':f = diviz; break;
	}
	int s = execute(a, b, f);
	std::cout << "s= " << s << "\n"


	/*f = diviz;
	int s = f(9, 3);
	int arr[5]{ 1,2,3,4,5 };
	s = calc(arr, 5, 1, mult);
	std::cout << "s = " << s << "\n";*/
}