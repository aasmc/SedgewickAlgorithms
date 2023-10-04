#include "iostream"
#include "eratosthenes.h"

/**
 * Prints first [size] of prime numbers.
 */
void PrintEratosthenesSeed(int size) {
    int i;
    int a[size];
    for(i = 2; i < size; ++i) {
        a[i] = 1;
    }
    // if a number is prime, 1 is stored in the array, otherwise 0 is stored in the array.
    for(i = 2; i < size; ++i) {
        if (a[i]) {
            for(int j = i; j * i < size; ++j) {
                a[i * j] = 0;
            }
        }
    }
    for(i = 2; i < size; ++i) {
        if (a[i]) {
            std::cout << " " << i;
        }
    }
    std::cout << std::endl;
}