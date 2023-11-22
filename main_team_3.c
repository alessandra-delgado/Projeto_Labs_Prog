#include <stdio.h>
#include <stdlib.h>

#include "functions_team_3.h"

/**
 * @brief In this project, the program asks the user for 20 integers, of values ranging from 7 to 30, 
 * which are then stored in an array. The provided integers are then used for either calculating statistics 
 * or perform operations, at the user's request.
 * 
 * @return int 
 */
int main()
{
    //* Variables ===============================================================
    int page = 1;
    char option;
    unsigned int arr[] = {7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
                          17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    int ret = 1;

    // write_array(arr);
    printf("\n");
    array_display(arr);

    press_r_to_continue(&option);

    while (1)
    {
        // has the same effect as typing "clear" in terminal
        system("clear");
        menu_display(page);
        printf("\n");

        /*An empty space character is left on scanf's
         * reading as we don't want the program
         * to pick on unwanted newlines!
         */
        printf("Insira uma opção: ");

        scanf(" %c", &option);

        // When the user chooses Q/q, the function returns 0
        ret = menu_option_assign(&page, option, arr);

        printf("\n");
        if (ret == 0)
        {
            printf("Adeus!\n");
            return 0;
        }

        // sopimpa
        if (option != 'X' && option != 'x' && option != 'P' && option != 'p')
        {
            press_r_to_continue(&option);
        }
    }
}
