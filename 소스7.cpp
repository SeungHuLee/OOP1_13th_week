#include<iostream>
#include<array>
#include<algorithm>
#include<iterator> //begin, end 함수
using namespace std;
int main() {
	// class 형식의 array 선언
	array<int, 5> arr_comp = { 5,8,10,9,4 };
	sort(arr_comp.begin(), arr_comp.end());

	//built in 형식의 array 선언
	int arr[5] = { 5,8,10,9,4 };
	//sort(arr, arr+5); arr 시작 주소, arr+5는 자동으로 주소값으로 변환해서 마지막(5*4)
	sort(begin(arr), end(arr));
	for (int item : arr) {
		cout << item << " ";
	}
	cout << endl;
}