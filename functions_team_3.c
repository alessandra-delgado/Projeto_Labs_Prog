#include "functions_team_3.h"
#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <gmp.h>

// ASSIGNING ================================================================================================
int menu_option_assign(int *pg, char opt, unsigned int arr[])
{
    if (opt == 'Q' || opt == 'q')
    {
        printf("A terminar...");
        return 0;
    }

    printf("A processar...\n");
    if (*pg == 1)
    {
        switch (opt)
        {
            case '1':
                printf("Cálculo da multiplicação de todos os elementos no vetor:\n");
                array_multiply_elements(arr);
                break;

            case '2':
                printf("Vetor ordenado por ordem crescente:\n");
                printf("Vetor reeordenado:\n");
                
                unsigned int* arr_ord = array_rearrange_asc(arr);
                array_display(arr_ord);
                free(arr_ord);
                break;

        case '3':
            printf("Cálculo do seno de todos os elementos no vetor:\n");
            printf("Resultado: %.3f", array_sin(arr));
            break;

        case '4':
            printf("Construção de uma matriz 20 por 20:\n");
            array_permute(arr);
            break;

        case '5':
            printf("Valores maiores que dois e divisíveis por cinco:\n");
            array_mod_5(arr, 20);
            break;

        case '6':
            printf("Mínimo de todos os elementos do vetor\n");
            printf("Mínimo:", array_min(arr, 20));
            break;

        case '7':
            printf("AJUDA:\n");
            break;

        case 'x':
        case 'X':
            *pg = 2;
            break;

        default:
            printf("Opção inválida! Tente novamente.");
            break;
        }
    }
    else
    {
        switch (opt)
        {
        case '1':
            printf("Leitura de um novo vetor:");
            break;

        case '2':
            printf("Cálculo do mínimo múltiplo comum de cada dois números seguidos do vetor:");
            break;

        case '3':
            printf("Cálculo e devolução da matriz 20x20:");
            break;

        case '4':
            printf("Matriz transposta:");
            break;

        case 'p':
        case 'P':
            *pg = 1;
            break;

        default:
            printf("Opção inválida! Tente novamente.");
            break;
        }
    }
    return 1;
}

void press_r_to_continue(char *opt)
{
    do
    {
        printf("Pressione R para continuar: ");
        scanf(" %c", &*opt);
        if (*opt != 'r' && *opt != 'R')
        {
            printf("Inseriu: '%c'. Tente novamente.\n", *opt);
        }
    } while (*opt != 'r' && *opt != 'R');
}

void menu_display(int page)
{
    printf("\n");
    switch (page)
    {
    // Display the menu
    case 1:
        printf("[====================================== Menu ======================================]\n");
        printf("| 1 - Cálculo da multiplicação de todos os elementos no vetor; #dá muitos problemas|\n"
               "| 2 - Devolução do vetor ordenado por ordem crescente;                             |\n"
               "| 3 - Cálculo do seno (sin) de todos os elementos no vetor;                        |\n"
               "| 4 - Construção de uma matriz 20 por 20, em que cada linha é composta pelo vetor  |\n"
               "|     lido (primeira linha) e por permutações dos seus valores (outras linhas);    |\n"
               "| 5 - Devolução dos valores maiores que dois e divisíveis por cinco;               |\n"
               "| 6 - Identificação do mínimo de todos os elementos do vetor.                      |\n"
               "| 7 - Ajuda                                                                        |\n"
               "|                                                                                  |\n"
               "| X - FUNCIONALIDADES EXTRA                                                        |\n"
               "| Q - Sair                                                                         |\n");
        break;

    // Display extra functionality page (sub-menu)
    case 2:
        printf("[==================================== Sub-Menu ====================================]\n");
        printf("| ****************************{ FUNCIONALIDADES EXTRA }*************************** |\n"
               "|                                                                                  |\n"
               "| 1 - Leitura de um novo vetor, e devolução de um  vetor que  mistura  metade      |\n"
               "|     do primeiro vetor e metade do segundo;                                       |\n"
               "| 2 - Cálculo do mínimo múltiplo comum de cada dois números seguidos do vetor;     |\n"
               "| 3 - Cálculo e devolução da matriz 20x20 resultante do produto do vetor inicial   |\n"
               "|     com o mesmo vetor ordenado por ordem crescente;                              |\n"
               "| 4 - Cálculo e apresentação da matriz transposta referida no ponto anterior;      |\n"
               "|                                                                                  |\n"
               "| P - Regressar ao menu principal;                                                 |\n"
               "| Q - Sair                                                                         |\n");
        break;
    default:
        break;
    }
    printf("[======================================================================  (PAG 0%d)  ]\n", page);
}

void array_write(unsigned int arr[])
{
    // 1 - Read user's input for each element in the array
    for (int i = 0; i < 20; i++)
    {
        do
        {
            printf("Insira o %dº elemento (entre 7 e 30): ", i);
            scanf("%d", &arr[i]);

        } while (arr[i] < 7 || arr[i] > 30); // Verifies if input is between no.s 7 and 30
    }
}

void array_display(unsigned int arr[])
{
    for (int i = 0; i < 20; i++)
    {
        printf("%d, ", arr[i]);
    }
}

// MENU FUNCTIONALITIES =====================================================================================

void array_multiply_elements(unsigned int n[])
{
    // 1 - Create variable
    mpz_t resultado;
    mpz_init(resultado);

    mpz_set_ui(resultado, 1);

    // 2 - Calculate
    for (int i = 0; i < 20; i++)
    {
        mpz_mul_ui(resultado, resultado, n[i]);
    }

    // 3 - Print
    printf("resultado = ");
    mpz_out_str(stdout, 10, resultado);
    printf("\n");

    // 4 - Clear
    mpz_clear(resultado);
}

unsigned int* array_rearrange_asc(unsigned int arr[])
{
    unsigned int* arr_asc = (unsigned int*) calloc(20, sizeof(unsigned int)); 

    // 1 - Copy from one array to another
    for(int i = 0; i < 20; i++)
    {
        arr_asc[i] = arr[i];
    }

    // 2 - Create temporary variables
    int count = 0;

    // 3 - Swap values when needed
    do
    {
        for (int i = 0; i < 19; i++)
        {
            if(arr_asc[i] > arr_asc[i+1])
            {
                swap(arr_asc, i);
                count++;
            }
        }

        count--;
    }
    while(count > 0);

    return arr_asc;
}

void matrix_display(unsigned int matrix[20][20])
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }
}

void array_mod_5(unsigned int arr[], int sz)
{
    printf("Pares (indice, elemento): ");


    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > 2 && arr[i] % 5 == 0)
        {
            printf("(%d, %d), ", i, arr[i]);
        }
    }

    printf("\n");
}

unsigned int array_min(unsigned int arr[], int sz)
{
    unsigned int min = UINT_MAX;

    for (int i = 0; i < sz; i++){
        // Could be a ternary operator
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

void array_permute(unsigned int arr[])
{
    // 1 - Create matrix
    unsigned int matrix[20][20];

    // 2 - Copy first line off array onto matrix's first line
    for (int i = 0; i < 20; i++)
    {
        matrix[0][i] = arr[i];
    }

    // 3 - Create permutations and write onto matrix's different lines
    for (int i = 1; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            // Pushes every element to the left, in comparison to the preceding line.
            // If it's the first element, pass it to the last cell
            matrix[i][j] = j == 19 ? matrix[i - 1][0] : matrix[i - 1][j + 1];
        }
    }

    // 4 - Display resulted matrix
    matrix_display(matrix);
}

void swap(unsigned int arr[], int i)
{
    int temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;
}

float array_sin(unsigned int arr[])
{
    unsigned int sum = 0;

    for (int i = 0; i < 20; i++)
    {
        sum += arr[i];
    }

    return sin(sum);
}
