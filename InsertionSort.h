#ifndef InsertionSort_h
#define InsertionSort_h

#include "Swap.h"

void insertion_sort(int numbers[], int len) {
	int x, temp;
	for (int i = 0; i < len; i++) {
		x = i;
		while (x > 0 && numbers[x] < numbers[x - 1]) {
			swap(numbers, x, x - 1);
			x--;
		}
	}
}
#endif