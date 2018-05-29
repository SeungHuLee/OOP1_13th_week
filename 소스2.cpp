#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& items) {
	for (int item : items) {
		cout << item << " ";
	}
	cout << endl;
}
void inputVector(vector<int>& items) {
	for (int& item : items) {
		cin >> item;
	}
}

int main() {
	vector<int> vec1(7);
	vector<int> vec2(10);

	cout << "The vector contains:\n";
	cout << "vec1: ";
	printVector(vec1);
	cout << "vec2: ";
	printVector(vec2);

	//vector initialize
	cout << "Enter " << vec1.size() + vec2.size() << "integers: ";
	inputVector(vec1);
	inputVector(vec2);
	cout << "After input, the vector contains:\n";
	cout << "vec1: ";
	printVector(vec1);
	cout << "vec2: ";
	printVector(vec2);

}