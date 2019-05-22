#include <iostream>
#define MAX_INT 2147483647
using namespace std;

void Snapshot(int * Sequence, int j) {
	int x = 0;
	while (x <= j) {
		cout << Sequence[x] << ";";
		x++;
	}
	cout << endl;
}

void InsertionSort(int *Sequence, int arraySize) {
	for (int j = 1; j < arraySize; j++) {
		int key = Sequence[j];
		int i = j - 1;
		while (i >= 0 && Sequence[i] > key) {
			Sequence[i + 1] = Sequence[i];
			i--;
		}
		Sequence[i + 1] = key;
		Snapshot(Sequence, j); // For printing output
	}
}

int main(int argc, char **argv) {
	int* Sequence;
	int arraySize = 1;

	cin >> arraySize;
	Sequence = new int[arraySize];

	for (int i = 0; i < arraySize; i++)
		cin >> Sequence[i];

	InsertionSort(Sequence, arraySize);

	delete[] Sequence;
}