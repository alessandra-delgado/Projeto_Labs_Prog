#ifndef _FUNCTIONS_TEAM_3_H_
#define _FUNCTIONS_TEAM_3_H_

//Writes user's input values onto array
void array_write(unsigned int arr[]);

//Depending on the page, displays either the menu or sub-menu
void menu_display(int page);

//The name is pretty self explanatory
void press_r_to_continue(char *opt);

//Assigns user's input to corresponding menu option/functionality
int menu_option_assign(int *pg, char opt, unsigned int arr[]);

/**
 * @brief Displays an array
 * 
 * @param arr 
 */
void array_display(unsigned int arr[], int sz);

/**
 * @brief Displays 20*20 matrix
 * 
 * @param matrix 
 */
void matrix_display(unsigned int matrix[20][20]);

// FUNCTIONALITIES =====================================================================================

/**
 * @brief Swaps two consecutive elemts of an array
 * 
 * @param arr 
 * @param i base index
 */
void swap(unsigned int arr[], int i);


/**
 * @brief Calculates the product of the array elements
 * 
 * @param arr Array
 * @param sz Size fo array arr
 */
void array_mul(unsigned int arr[], int sz);

/**
 * @brief Returns the array arr sorted
 * 
 * @param arr Array
 * @param sz Size fo array arr
 */
unsigned int* array_sort_asc(unsigned int arr[], int sz);

/**
 * @brief Calculates the sin of the array arr elements
 * 
 * @param arr Array
 * @param sz Size fo array arr
 */
void array_sin(unsigned int arr[], int sz);

/**
 * @brief Permutes a given array, moving every element to the left per line
 * 
 * @param arr 
 * @param sz 
 */
void array_permute(unsigned int arr[], int sz);

/**
 * @brief Displays elements bigger than 2 and divisible by 5 of array arr of size sz
 * 
 * @param arr Array 
 * @param sz  Size of the given array
 */
void array_mod_5(unsigned int arr[], int sz);

/**
 * @brief Calculates the mininum value of a given array arr of size sz
 * 
 * @param arr Array 
 * @param sz  Size of the given array
 * @return unsigned int the minimum element of the array arr
 */
unsigned int array_min(unsigned int arr[], int sz);

//Extra functionalities =======================

#endif //_FUNCTIONS_TEAM_3_H_