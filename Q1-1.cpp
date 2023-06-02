
#include <iostream>

long product(int* arr, int p) {
    if (p < 1) // If the size of the array is less than 1
        return -1;

    long result = 1;  // Initialize the result variable to 1
    for (int d = 0; d < p; d++) {
        result *= arr[d];  // Multiply the current element with the result
    }

    return result;
}
