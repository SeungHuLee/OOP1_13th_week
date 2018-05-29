#include <iostream>
using namespace std;

int main() {
	int var = 10;
	int* ptr = &var;
	cout << "The value of var is " << var << endl;
	cout << "The address of var is " << &var << endl << endl;

	cout << "The value of ptr is " << ptr << endl;
	cout << "The value of *ptr is " << *ptr << endl;

}