#include<iostream>
using namespace std;

//�� �Լ��� �����ϴ�
//�⺻������ pass-by-reference�̱� ������
//�Ķ���ͷ� �ѱ涧 const�� ������ش�
void printElements1(const int values[], const size_t num);
void printElements2(const int* values, const size_t num);
int main() {
	int arr[5] = { 1,5,3,8,5 };
	printElements1(arr, sizeof arr / sizeof(int));
	printElements2(arr, sizeof arr / sizeof(int));
}