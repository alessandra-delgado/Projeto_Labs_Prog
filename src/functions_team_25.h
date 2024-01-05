/**
 * @file functions_team_25.h
 * @author 51713 - Alessandra Yuna Bettencourt Delgado (alessandra.delgado@ubi.pt)
 * @brief 
 * @version 0.1
 * @date 2024-01-05
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef _FUNCTIONS_TEAM_3_H_
#define _FUNCTIONS_TEAM_3_H_


/**
 * @brief Depending on the page, displays either the menu or sub-menu.
 * 
 * @param page Represents the current page for the menu.
 */
void menu_display(int page);

/**
 * @brief Assigns user's input to corresponding menu option/functionality
 * 
 * @param pg Represents the current page for the menu.
 * @param opt Is the user's option.
 * @param arr Is a given array.
 * @return Returns 0 when the value of opt is 'Q' or 'q'
 */
int menu_option_assign(int *pg, char opt, unsigned int arr[]);

/**
 * @brief Freezes the program until user inserts char 'R' or 'r'.
 * 
 */
void press_r_to_continue();

/**
 * @brief Reads user input values to array
 * 
 * @param arr Is a given array.
 * @param sz Is the size of arr.
 */
void array_read(unsigned int arr[], int sz);

/**
 * @brief Displays an array
 * 
 * @param arr Is a given array.
 */
void array_display(unsigned int arr[], int sz);

/**
 * @brief Displays a given square matrix of order N.
 * 
 * @param matrix Is a given matrix.
 * @param sz Is the order.
 */
void matrix_display(unsigned int** matrix, int sz);

// FUNCTIONALITIES ==============================================================================================================

/**
 * @brief Calculates the product of the array elements.
 * 
 * @param arr Is a given array.
 * @param sz Is the size of arr.
 */
void array_mul(unsigned int arr[], int sz);

/**
 * @brief Swaps two consecutive elements of a given array.
 * 
 * @param arr Is a given array.
 * @param i Is arr's given index.
 */
void swap(unsigned int arr[], int i);

/**
 * @brief Based on given array, sorts it in ascending order onto a new array.
 * 
 * @param arr Is a given array.
 * @param sz Is the size of arr.
 * @return Returns pointer of type unsingned int for the resultant array.
 */
unsigned int* array_sort_asc(unsigned int arr[], int sz);

/**
 * @brief Calculates the sin of the array arr elements.
 * 
 * @param arr Is a given array.
 * @param sz Is the size of arr.
 */
void array_sin(unsigned int arr[], int sz);


/**
 * @brief Creates a matrix based on an array. Being the first row the array itself, and all the other rows are its permutations, using a ROL algorithm.
 * 
 * @param arr Is a given array.
 * @param sz Is the size of arr.
 * @return Returns double pointer of type unsigned int for the resultant matrix.
 */
unsigned int** array_permute(unsigned int arr[], int sz);

/**
 * @brief Displays elements bigger than 2 and divisible by 5 of a given array.
 * 
 * @param arr Is a given array.
 * @param sz Is the size of arr.
 */
void array_mod_5(unsigned int arr[], int sz);

/**
 * @brief Calculates the mininum value of a given array arr of size sz.
 * 
 * @param arr Is a given array.
 * @param sz Is the size of arr.
 * @return Returns the minimum element, of type unsigned int, from arr.
 */
unsigned int array_min(unsigned int arr[], int sz);

/**
 * @brief Displays the help screen
 * 
 */
void help_display();

//Extra functionalities =========================================================================================================

/**
 * @brief Reads a new array, and merges it with a given array, attending a zip algorithm. 
 * 
 * @param arr Is a given array.
 * @param sz Is the size of arr.
 * @return Returns a pointer, of type unsigned int, for the resultant array.
 */
unsigned int* array_merge(unsigned int arr[], int sz);

/**
 * @brief Zip algorithm for two given arrays.
 * 
 * @param arr_1 Is a given array, of type unsigned int.
 * @param arr_2 Is another given array, of type unsigned int.
 * @param sz Is the size of the resultant array.
 * @return The pointer, of type unsigned int, for the resultant array.
 */
unsigned int* array_zip(unsigned int arr_1[], unsigned int arr_2[], int sz);

/**
 * @brief Calculates least common multiple of every each two elements in a row of a given array.
 * 
 * @param arr Is a given array.
 * @param sz Is the size of arr.
 */
void array_lcm(unsigned int arr[], int sz);

/**
 * @brief Determines the greatest common divisor of two given numbers.
 * 
 * @param a Is a given integer. 
 * @param b Is another given integer.
 * @return Returns the greatest common divisor of a and b.
 */
int algo_gcd(int a, int b);

/**
 * @brief Determines the least common multiple of two given numbers.
 * 
 * @param a Is a given integer. 
 * @param b Is another given integer.
 * @return Returns the least common multiple of a and b.
 */
int algo_lcm(int a, int b);

/**
 * @brief Calculates the matrix product of two given arrays.
 * 
 * @param arr Is a given array.
 * @param arr_asc Is the second array to multiply arr with.
 * @param sz Is size the of arr.
 * @return Returns a double pointer, of type unsigned int, for the resultant matrix.
 */
unsigned int** array_matrix_prod(unsigned int arr[], unsigned int arr_asc[], int sz);

/**
 * @brief Displays a given matrix of order N transposed.
 * 
 * @param matrix Is a given matrix.
 * @param sz Is the order. 
 */
void matrix_transposed(unsigned int** matrix, int sz);

#endif //_FUNCTIONS_TEAM_3_H_