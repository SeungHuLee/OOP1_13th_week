#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;
int main() {
	vector<int> vec(10);

	try {
		cout << "attempt to display vec.at(15)" << endl;
		cout << vec.at(15) << endl;
	}
	catch (out_of_range& ex) {
		cerr << "An exception occurred: " << ex.what() << endl;
	}
}