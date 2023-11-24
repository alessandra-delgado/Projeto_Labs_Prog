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
 */
void matrix_display(unsigned int matrix[20][20]);

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

/**
 * @brief Displays the help screen
 * 
 */
void help_display();

//Extra functionalities =========================================================================================================

/**
 * @brief Creates a new array (arr_half) and reads user input to write on it. Calls auxiliar array_half_write function.
 * 
 * @param arr Array
 * @param sz Size of array arr
 * @return unsigned int pointer for the new array, arr_half
 */
unsigned int* array_half_create(unsigned int arr[], int sz);

/**
 * @brief Auxiliar array for array_half_create function. Writes half of the arr array onto the new array, arr_half.
 * 
 * @param arr Array
 * @param arr_half Second array
 * @param sz Size of both arrays arr and arr_half
 */
void array_half_write(unsigned int arr[], unsigned int arr_half[], int sz);

/**
 * @brief Calculates least common multiple of every each two array's numbers in a row.
 * 
 * @param arr Array
 * @param sz Size of array arr
 */
void array_lcm(unsigned int arr[], int sz);

int algo_gcd(int a, int b);
int algo_lcm(int a, int b);

#endif //_FUNCTIONS_TEAM_3_H_