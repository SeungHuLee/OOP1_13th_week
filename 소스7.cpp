#include<iostream>
#include<array>
#include<algorithm>
#include<iterator> //begin, end �Լ�
using namespace std;
int main() {
	// class ������ array ����
	array<int, 5> arr_comp = { 5,8,10,9,4 };
	sort(arr_comp.begin(), arr_comp.end());

	//built in ������ array ����
	int arr[5] = { 5,8,10,9,4 };
	//sort(arr, arr+5); arr ���� �ּ�, arr+5�� �ڵ����� �ּҰ����� ��ȯ�ؼ� ������(5*4)
	sort(begin(arr), end(arr));
	for (int item : arr) {
		cout << item << " ";
	}
	cout << endl;
}