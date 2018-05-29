#include <iostream>
#include <vector>
using namespace std;

int main() {
	int size;
	cout << "Input the size : ";
	cin >> size;
	//array<int, size> arr; // error

	vector<int> vec(size); //OK
}