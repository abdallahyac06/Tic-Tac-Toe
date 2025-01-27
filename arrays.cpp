#include "arrays.h"
#include <iostream>

void initialize(char A[], int n) {
    for (int i = 0; i < n; i++) {
        A[i] = '\0';
    }
}

bool placeMark(char A[], int n, char Mark, int position) {
    if (A[position] == '\0' && position < n && position >= 0) {
        A[position] = Mark;
        return true;
    }
        return false;
}

bool fullArray(char A[], int n) {
    for (int i = 0; i < n; i++)
        if (!A[i]) {
            return false;
        }
    return true;
}

void printArrayIn2D(char A[], int n, int rows, int columns) {
    if (n < rows * columns) {
        return ;
    }

    int k = 0;
    std::cout << std::endl;

    for (int i = 0; i < columns * 4 + 1; i++) {
        std::cout << '-';
    }
    std::cout << std::endl;

    for (int i = 0; i < rows; i++) {
        std::cout << '|';

        for (int j = 0; j < columns; j++) {
            std::cout << ' ';
            if (A[k]) {
                std::cout << A[k];
            } else {
            std::cout << k + 1;
            }
            std::cout << " |";
            k++;
        }
        std::cout << std::endl;

        for (int c = 0; c < columns * 4 + 1; c++) {
            std::cout << '-';
        }
        std::cout << std::endl;
    }
}
