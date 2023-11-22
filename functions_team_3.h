#ifndef _FUNCTIONS_TEAM_3_H_
#define _FUNCTIONS_TEAM_3_H_

//Depending on the page, displays either the menu or sub-menu
void menu_display(int page);

//Assigns user's input to corresponding menu option/functionality
int menu_option_assign(int *pg, char opt, unsigned int arr[]);

/**
 * @brief Freezes the program until user inputs char R
 * 
 */
void press_r_to_continue();

/**
 * @brief Reads user input values to array
 * 
 * @param arr Array
 * @param sz Size of array arr
 */
void array_read(unsigned int arr[], int sz);

/**
 * @brief Displays an array
 * 
 * @param arr Array
 */
void array_display(unsigned int arr[], int sz);

/**
 * @brief Displays 20*20 matrix
 * 
 * @param matrix Matrix
 */
void matrix_display(unsigned int matrix[20][20]);

// FUNCTIONALITIES =====================================================================================

/**
 * @brief Calculates the product of the array elements
 * 
 * @param arr Array
 * @param sz Size of array arr
 */
void array_mul(unsigned int arr[], int sz);

/**
 * @brief Swaps two consecutive elemts of an array
 * 
 * @param arr Array
 * @param i base index
 */
void swap(unsigned int arr[], int i);

/**
 * @brief Returns the array arr sorted
 * 
 * @param arr Array
 * @param sz Size of array arr
 */
unsigned int* array_sort_asc(unsigned int arr[], int sz);

/**
 * @brief Calculates the sin of the array arr elements
 * 
 * @param arr Array
 * @param sz Size of array arr
 */
void array_sin(unsigned int arr[], int sz);

/**
 * @brief Permutes a given array, moving every element to the left per line
 * 
 * @param arr Array
 * @param sz Size of array arr
 */
void array_permute(unsigned int arr[], int sz);

/**
 * @brief Displays elements bigger than 2 and divisible by 5 of array arr of size sz
 * 
 * @param arr Array
 * @param sz Size of array arr
 */
void array_mod_5(unsigned int arr[], int sz);

/**
 * @brief Calculates the mininum value of a given array arr of size sz
 * 
 * @param arr Array 
 * @param sz Size of array arr
 * @return unsigned int the minimum element of the array arr
 */
unsigned int array_min(unsigned int arr[], int sz);

//Extra functionalities =======================

#endif //_FUNCTIONS_TEAM_3_H_