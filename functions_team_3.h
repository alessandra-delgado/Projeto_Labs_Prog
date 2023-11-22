#ifndef _FUNCTIONS_TEAM_3_H_
#define _FUNCTIONS_TEAM_3_H_

void swap(unsigned int arr[], int i);

//Writes user's input values onto array
void array_write(unsigned int arr[]);

//Displays array
void array_display(unsigned int arr[]);

//Depending on the page, displays either the menu or sub-menu
void menu_display(int page);

//The name is pretty self explanatory
void press_r_to_continue(char *opt);

//Assigns user's input to corresponding menu option/functionality
int menu_option_assign(int *pg, char opt, unsigned int arr[]);

// FUNCTIONALITIES =====================================================================================

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

//Permutes every element to the left, in comparison to preceding line, and displays it
void array_permute(unsigned int arr[]);
void matrix_display(unsigned int matrix[20][20]);

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


void help_display();

//Extra functionalities =======================

#endif //_FUNCTIONS_TEAM_3_H_