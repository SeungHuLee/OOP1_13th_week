#include <iostream>
using namespace std;

int main() {
	int var = 10;
	int* ptr = &var;
	cout << "The value of var is " << var << endl;
	cout << "The address of var is " << &var << endl << endl;

	cout << "The value of ptr is " << ptr << endl;
	cout << "The value of *ptr is " << *ptr << endl; // 주소를 반환하는건 &, 주소에 접근하는건 *

}