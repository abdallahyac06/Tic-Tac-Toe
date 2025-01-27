#ifndef arrays_H
#define arrays_H


/**
 * @brief Initializes the given character array with spaces.
 * 
 * This function sets each element of the character array to a null character ('\0').
 * 
 * @param array The character array to be initialized.
 * @param n The number of elements in the array.
 */
void initialize(char array[], int n);

/**
 * @brief Places a mark in the specified position of the array.
 * 
 * @param array The array where the mark will be placed.
 * @param n The size of the array.
 * @param Mark The character to be placed in the array.
 * @param position The position in the array where the mark will be placed (0-based index).
 * @return true if the mark was successfully placed, false if the position is out of bounds or not empty.
 */
bool placeMark(char array[], int n, char Mark, int position);

/**
 * @brief Checks if the given character array is full.
 * 
 * This function determines if the provided character array is full by checking
 * if all elements up to the specified length are non-null characters.
 * 
 * @param array The character array to be checked.
 * @param n The number of elements in the array to check.
 * @return true if the array is full (all elements are non-null), false otherwise.
 */
bool fullArray(char array[], int n);

/**
 * @brief Prints a 1D array as a 2D array with specified rows and columns.
 * 
 * This function takes a 1D array of characters and prints it in a 2D format
 * with the given number of rows and columns. If the number of elements in the
 * array is less than rows * columns, the remaining positions will be left blank.
 * 
 * @param array The 1D array of characters to be printed.
 * @param n The number of elements in the array.
 * @param rows The number of rows for the 2D representation.
 * @param columns The number of columns for the 2D representation.
 */
void printArrayIn2D(char array[], int n, int rows, int columns);

#endif
