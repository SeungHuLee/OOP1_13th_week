#include<iostream>
using namespace std;

//두 함수는 동일하다
//기본적으로 pass-by-reference이기 때문에
//파라미터로 넘길때 const를 명시해준다
void printElements1(const int values[], const size_t num); //출력만 할 것이기 때문에 array argument앞에 const를 붙인다. (array를 받을때는 pass-by-ref로 받기 때문.)
void printElements2(const int* values, const size_t num);
int main() {
	int arr[5] = { 1,5,3,8,5 };
	printElements1(arr, sizeof arr / sizeof(int));
	printElements2(arr, sizeof arr / sizeof(int));
}