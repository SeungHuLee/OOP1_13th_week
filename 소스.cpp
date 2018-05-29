#include <iostream>
#include <array>
#include <ctime>
#include <algorithm>
using namespace std;

int main() {
	array<bool, 26> sample;
	for (size_t i = 0; i < sample.size(); i++) {
		sample[i] = true;
	}
	srand(static_cast<unsigned int>(time(0)));
	array<array<int, 5>, 5> puzzle;
	for (auto& row : puzzle) {
		for (auto& elem : row) {
			while (1) {
				int temp = rand() % 25 + 1;
				if (sample[temp]) {
					elem = temp;
					sample[temp] = false;
					break;
				}
			}
		}
	}
	cout << "original puzzle: " << endl;
	for (auto row : puzzle) {
		for (auto elem : row) {
			cout << elem << " ";
		}
		cout << endl;
	}

	cout << "puzzle sorted by row: " << endl;
	for (auto& row : puzzle) {
		sort(row.begin(), row.end());
	}
	for (auto row : puzzle) {
		for (auto elem : row) {
			cout << elem << " ";
		}
		cout << endl;
	}
	
	cout << "puzzle sorted by column: " << endl;
	array<array<int, 5>, 5>puzzle2;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			puzzle2[i][j] = puzzle[j][i];
		}
	}
	for (auto& row : puzzle2) {
		sort(row.begin(), row.end());
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << puzzle2[j][i] << ' ';
		}
		cout << endl;
	}
}