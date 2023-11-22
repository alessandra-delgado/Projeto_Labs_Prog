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

//Main menu ===================================
//Multiplies every array element by one another
void array_multiply_elements(unsigned int arr[]);

unsigned int* array_rearrange_asc(unsigned int arr[]);

//Sums all elements and calculates result's sin
float array_sin(unsigned int arr[]);

//Permutes every element to the left, in comparison to preceding line, and displays it
void array_permute(unsigned int arr[]);
void matrix_display(unsigned int matrix[20][20]);

//Extra functionalities =======================



#endif //_FUNCTIONS_TEAM_3_H_