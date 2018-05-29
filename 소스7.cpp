#include<iostream>
#include<array>
#include<algorithm>
#include<iterator>
using namespace std;
int main() {
	// class 형식의 array 선언
	array<int, 5> arr_comp = { 5,8,10,9,4 };
	sort(arr_comp.begin(), arr_comp.end());

	//built in 형식의 array 선언
	int arr[5] = { 5,8,10,9,4 };
	//sort(arr, arr+5);
	sort(begin(arr), end(arr));
	for (int item : arr) {
		cout << item << " ";
	}
	cout << endl;
}