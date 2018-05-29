#include <iostream>
using namespace std;
//pass-by-reference with reference arguments
void changeVar(int &var, int value) { var = value; }
//pass-by-reference with pointer
void changeVar2(int *var, int value) { *var = value; }
int main() {
	int var = 0;
	changeVar(var, 10);
	cout << var << endl;

	changeVar2(&var, 10);
	cout << var << endl;
}