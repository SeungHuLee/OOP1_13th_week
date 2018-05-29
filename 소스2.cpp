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

	//vector object에 !=연산자 사용하기
	if (vec1 != vec2) {
		cout << "vec1 and vec2 are not equal" << endl;
	}

	vector<int>vec3{ vec1 };
	//vector<int vec3 = vec1;
	cout << "The vec3 contains:\n";
	printVector(vec3);

	//vector 대입
	vec2 = vec1;
	if (vec1 == vec2) {
		cout << "vec1 and vec2 are equal" << endl;
	}
	//배열처럼 접근가능
	cout << "vec1[3] is : " << vec1[3] << endl;
}