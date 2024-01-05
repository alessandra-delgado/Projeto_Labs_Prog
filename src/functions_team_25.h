/**
 * @file functions_team_3.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef _FUNCTIONS_TEAM_3_H_
#define _FUNCTIONS_TEAM_3_H_


/**
 * @brief Depending on the page, displays either the menu or sub-menu
 * 
 * @param page
 */
void menu_display(int page);

/**
 * @brief Assigns user's input to corresponding menu option/functionality
 * 
 * @param pg Page
 * @param opt Option
 * @param arr Array
 * @return Returns 0 when the user inputs 'Q' or 'q'
 */
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
 * @param sz size
 */
void matrix_display(unsigned int** matrix, int sz);

// FUNCTIONALITIES ==============================================================================================================

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
 * @return unsigned** Resultant matrix
 */
unsigned int** array_permute(unsigned int arr[], int sz);

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

/**
 * @brief Displays the help screen
 * 
 */
void help_display();

//Extra functionalities =========================================================================================================

/**
 * @brief Reads a new array, and merges it with a given array, attending a zip algorithm. 
 * 
 * @param arr Array
 * @param sz Size of array arr
 * @return unsigned int pointer for the new array, arr_2
 */
unsigned int* array_merge(unsigned int arr[], int sz);

/*exemplo
 * This function returns the division of two floats passed as parameters.
 * @param x and @param y are floats, the dividend and the divisor, respectively.
 *
 * @return The value of x divided by y if y is different from 0. 
 * @return 0 if y is equal to 0.
 *
 * Notice that the function checks if y is different from 0 before
 * performing the division.
*/


/**
 * @brief Zip algorithm for two given arrays.
 * 
 * @param arr_1 and @param arr_2 are unsigned int* arrays.
 * @param sz is the size of the resulting array.
 * @return The pointer of type unsigned int* for the resulting array.
 */
unsigned int* array_zip(unsigned int arr_1[], unsigned int arr_2[], int sz);

/**
 * @brief Calculates least common multiple of every each two array's numbers in a row.
 * 
 * @param arr Array
 * @param sz Size of array arr
 */
void array_lcm(unsigned int arr[], int sz);

int algo_gcd(int a, int b);
int algo_lcm(int a, int b);

/**
 * @brief Calculates the matrix product of two different arrays.
 * 
 * @param arr Array
 * @param arr_asc Second array to multiply for
 * @param sz Size of array arr
 */
unsigned int** array_matrix_prod(unsigned int arr[], unsigned int arr_asc[], int sz);

void matrix_transposed(unsigned int** matrix, int sz);


#endif //_FUNCTIONS_TEAM_3_H_