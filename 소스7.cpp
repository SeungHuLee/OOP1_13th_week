#include<iostream>
#include<array>
#include<algorithm>
#include<iterator>
using namespace std;
int main() {
	// class ������ array ����
	array<int, 5> arr_comp = { 5,8,10,9,4 };
	sort(arr_comp.begin(), arr_comp.end());

	//built in ������ array ����
	int arr[5] = { 5,8,10,9,4 };
	//sort(arr, arr+5);
	sort(begin(arr), end(arr));
	for (int item : arr) {
		cout << item << " ";
	}
	cout << endl;
}