
#include <iostream>

// Function to count the number of even or odd elements in a 2D matrix
int countOddEven(int** matrix, int nRows, int nCols, bool even) {
    int count = 0; // Initialize the count variable to 0

    for (int p = 0; p < nRows; p++) {
        for (int d = 0; d < nCols; d++) {
            if ((matrix[p][d] % 2 == 0 && even) || (matrix[p][d] % 2 != 0 && !even)) {  // If the element is even and even=true, or if the element is odd and even=false,
                 count++;  // increment the count
            }
        }
    }

    return count;
}
