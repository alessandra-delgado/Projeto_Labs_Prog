/**
 * @file main_team_25.c
 * @author Alessandra Delgado (alessandra.delgado@ubi.pt)
 * @brief In this project, the program asks the user for 20 integers, of values ranging from 7 to 30,
 * which are then stored in an array. The provided integers are then used for either calculating statistics
 * or perform operations, at the user's request.
 * @version 0.1
 * @date 2023-12-02
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "functions_team_25.h"

//Todo: Change help menu
//Todo: Implement that one scrambling function properly
//Todo: Better documentation
//Todo: Change to read array function

/**
 * @brief 
 * @param argc Argument count
 * @param argv Argument vector
 * @return int 
 */
int main(int argc, char* argv[])
{
    if(argc >= 2)
    {
        if (strcmp(argv[1], "--help") == 0)
        {
            help_display();
            return 0;
        }
        else
        {
            printf("Comando desconhecido. Tente '--help'\n");
            return 0;
        }
    }
    
    int page = 1;
   char option;

    unsigned int arr[] = {7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
                          17, 18, 19, 20, 21, 30, 23, 24, 25, 26};

    printf("\n");
    array_display(arr, 20);
    
    printf("\n");
    press_r_to_continue();


    while(1)
    {
        // 1 - Display menu to user

        // has the same effect as typing "clear" in terminal
        system("clear");
        menu_display(page);
        printf("\n");

        // 2 - Get Input from user
        printf("Insira uma opção: ");

        /*An empty space character is left on scanf's
         * reading as we don't want the program
         * to pick on unwanted newlines
         */
        scanf(" %c", &option);

        // When the user chooses the quitting option, the function returns 0
        if(menu_option_assign(&page, option, arr) == 0)
        {
            printf("Adeus!\n");
            return 0;
        }
        printf("\n"); 

        // sopimpa
        if (option != 'X' && option != 'x' && option != 'P' && option != 'p')
        {
            press_r_to_continue();
        }
    }
    
    return 0;
}