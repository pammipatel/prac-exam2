
#include <iostream>
#include <cstring>
#include <cctype>

// Function to reverse and capitalize the characters in an array
char* reverseCapitals(char* original, int b) { // b is size of an array
    char* result = new char[b + 1]; // It allocates the memory for the result array
    result[b] = '\0';  // value of terminator is kept null to represent end of the result array

    for (int p = 0; p < b; p++) {
        char c = original[b - p - 1]; // to Reverse the  order
        if (c >= 'a' && c <= 'z') {
            c -= 32; // Convert lowercase to uppercase using ASCII values
        }
        result[p] = c;
    }

    return result;   // It returns a new array thatcontains the origial array thatiscapitalizedand is being reversed
}
