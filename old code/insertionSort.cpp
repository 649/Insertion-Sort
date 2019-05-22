#include <iostream>
#include "InsertionSort.h"

void display(int list[], int size, std::string message) {
    std::cout << message << std::endl;
    
    for (int i = 0; i < size; i++) {
        std::cout << list[i] << " ";
    }
    
    std::cout << std::endl;
}

int main(int argc, const char * argv[]) {
    int size;
    std::cin >> size;
    
    const int length = size;
    
    int numbers[length];
    
    for (int i = 0; i < length; i++) {
        int current;
        std::cin >> current;
        
        numbers[i] = current;
    }
    
    display(numbers, length, "Before:");
    
    insertion_sort(numbers, length);
    
    display(numbers, length, "After:");
 
    return 0;
}
