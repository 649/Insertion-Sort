#pragma once
#include "Swap.h"

void insertion_sort(int numbers[], int length) {
    int x, temp;
	
    for (int i = 0; i < length; i++) {
        x = i;
	    
        while (x > 0 && numbers[x] < numbers[x - 1]) {
            swap(numbers, x, x - 1);
            x--;
        }
    }
}
