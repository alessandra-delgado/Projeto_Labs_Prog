#include "functions_team_25.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <gmp.h>

// ASSIGNING ====================================================================================================================
int menu_option_assign(int *pg, char opt, unsigned int arr[])
{
    // 1 - Create NULL pointers
    unsigned int *arr_asc = NULL;
    unsigned int **matrix = NULL;
    unsigned int *arr_ord = NULL;
    unsigned int *arr_zip = NULL;

    if (opt == 'Q' || opt == 'q')
    {
        return 0;
    }

    printf("A processar...\n");
    if (*pg == 1)
    {
        switch (opt)
        {
        case '1':
            printf("Cálculo da multiplicação de todos os elementos no vetor:\n");
            array_mul(arr, 20);
            break;

        case '2':
            printf("Vetor reeordenado por ordem crescente:\n");

            arr_ord = array_sort_asc(arr, 20);
            array_display(arr_ord, 20);
            free(arr_ord);
            break;

        case '3':
            printf("Cálculo do seno de todos os elementos no vetor:\n");
            array_sin(arr, 20);
            break;

        case '4':
            printf("Construção de uma matriz 20 por 20:\n");
            matrix = array_permute(arr, 20);
            matrix_display(matrix, 20);

            // Freeing everything that was created dynamically
            for (int i = 0; i < 20; i++)
            {
                free(matrix[i]);
            }
            free(matrix);
            break;

        case '5':
            printf("Valores maiores que dois e divisíveis por cinco:\n");
            array_mod_5(arr, 20);
            break;

        case '6':
            printf("Mínimo de todos os elementos do vetor\n");
            printf("Mínimo: %d", array_min(arr, 20));
            break;

        case '7':
            system("clear");
            help_display();
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
            printf("Leitura de um novo vetor\n");
            arr_zip = array_merge(arr, 20);
            array_display(arr_zip, 20);

            free(arr_zip);
            break;

        case '2':
            printf("Cálculo do mínimo múltiplo comum de cada dois números seguidos do vetor.\n");
            array_lcm(arr, 20);
            break;

        case '3':
            arr_asc = array_sort_asc(arr, 20);
            matrix = array_matrix_prod(arr, arr_asc, 20);
            printf("Matrix 20x20:\n");
            matrix_display(matrix, 20);

            // Freeing everything that was created dynamically
            free(arr_asc);
            for (int i = 0; i < 20; i++)
            {
                free(matrix[i]);
            }
            free(matrix);
            break;

        case '4':
            printf("Matriz transposta:\n");
            arr_asc = array_sort_asc(arr, 20);
            matrix = array_matrix_prod(arr, arr_asc, 20);
            matrix_transposed(matrix, 20);

            // Freeing everything that was created dynamically
            free(arr_asc);
            for (int i = 0; i < 20; i++)
            {
                free(matrix[i]);
            }
            free(matrix);
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

void press_r_to_resume()
{
    char opt = ' ';

    do
    {
        printf("Pressione R para continuar: ");
        scanf(" %c", &opt);
        if (opt != 'r' && opt != 'R')
        {
            printf("Inseriu: '%c'. Tente novamente.\n", opt);
        }
    } while (opt != 'r' && opt != 'R');
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

void array_read(unsigned int arr[], int sz)
{
    // 1 - Read user's input for each element in the array
    for (int i = 0; i < sz; i++)
    {
        do
        {
            printf("Insira o %dº elemento (entre 7 e 30): ", i+1);
            scanf("%d", &arr[i]);

        } while (arr[i] < 7 || arr[i] > 30); // Verifies if input is between no.s 7 and 30
    }
}

void array_display(unsigned int arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d, ", arr[i]);
    }
}

void matrix_display(unsigned int **matrix, int sz)
{
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }
}

// MAIN MENU FUNCTIONALITIES ====================================================================================================
void array_mul(unsigned int n[], int sz)
{
    // 1 - Create variable
    mpz_t result;
    mpz_init(result);

    mpz_set_ui(result, 1);

    // 2 - Calculate
    for (int i = 0; i < sz; i++)
    {
        mpz_mul_ui(result, result, n[i]);
    }

    // 3 - Print
    printf("Resultado = ");
    mpz_out_str(stdout, 10, result);
    printf("\n");

    // 4 - Clear
    mpz_clear(result);
}

void swap(unsigned int arr[], int i)
{
    int temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;
}

unsigned int *array_sort_asc(unsigned int arr[], int sz)
{
    // 1 - Create array dynamically
    unsigned int *arr_asc = (unsigned int *)calloc(sz, sizeof(unsigned int));

    // 2 - Copy from one array to another
    for (int i = 0; i < sz; i++)
    {
        arr_asc[i] = arr[i];
    }

    // 3 - Create temporary variables
    int count = 0;

    // 4 - Swap values when needed
    do
    {
        for (int i = 0; i < sz - 1; i++)
        {
            if (arr_asc[i] > arr_asc[i + 1])
            {
                swap(arr_asc, i);
                count++;
            }
        }

        count--;
    } while (count > 0);

    // 5 - Return pointer
    return arr_asc;
}

unsigned int **array_permute(unsigned int arr[], int sz)
{
    // 1 - Create sz*sz matrix dynamically
    unsigned int **matrix = (unsigned int **)calloc(sz, sizeof(unsigned int *));

    for (int i = 0; i < sz; i++)
    {
        matrix[i] = (unsigned int *)calloc(sz, sizeof(unsigned int));
    }

    // 2 - Copy first line off array onto matrix's first line
    for (int i = 0; i < sz; i++)
    {
        matrix[0][i] = arr[i];
    }

    // 3 - Create permutations and write onto matrix's different lines
    for (int i = 1; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            // ROL:
            // Pushes every element to the left, regarding the preceding line.
            // If it's the first element, pass it to the last cell
            matrix[i][j] = j == (sz - 1) ? matrix[i - 1][0] : matrix[i - 1][j + 1];
        }
    }

    return matrix;
}

void array_sin(unsigned int arr[], int sz)
{
    // 1 - Determines the sin of each element
    for (int i = 0; i < sz; i++)
    {
        printf("%.3f, ", sin(arr[i]));
    }

    printf("\n");
}

void array_mod_5(unsigned int arr[], int sz)
{
    int count = 0;
    printf("Pares (indice, elemento): ");

    // 1 - Determines which elements are better than two and dividable by five
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > 2 && arr[i] % 5 == 0)
        {
            // 2 - Print prefered elements
            printf("(%d, %d), ", i, arr[i]);
            count +=1;
        }
    }

    // 3 - Print message if there are no prefered elements
    if(count == 0)
    {
        printf("Não existem.");
    }

    printf("\n");
}

unsigned int array_min(unsigned int arr[], int sz)
{
    unsigned int min = UINT_MAX;

    for (int i = 0; i < sz; i++)
    {
        // Could be a ternary operator
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

void help_display()
{
    printf("[====================================== AJUDA =====================================]\n"
           "|                                                                                  |\n"
           "|  Após a leitura dos valores, passados para o vetor, é mostrado o menu principal, |\n"
           "|  no qual o utilizador pode realizar uma escolha de operações a serem feitas so-  |\n"
           "|  bre esse mesmo vetor.                                                           |\n"
           "|  Na página inicial (1) estão apresentadas as funcionalidades principais (bási-   |\n"
           "|  cas).                                                                           |\n"
           "|  A página de funcionalidades extras (2), ou o sub-menu, pode ser acessad@ pelo   |\n"
           "|  utilizador ao premir 'X', ou 'x' (para retornar à página inicial, o utilizador  |\n"
           "|  deve premir 'P', ou 'p').                                                       |\n"
           "|  Tanto no menu principal, como no sub-menu, o utilizador pode terminar o pro-    |\n"
           "|  grama ao premir 'Q', ou 'q'.                                                    |\n"
           "|  Deve inserir o número da funcionalidade que desejar e premir ENTER.             |\n"
           "[==================================================================================]\n");
}

// EXTRA FUNCTIONALITIES =========================================================================================================
unsigned int* array_merge(unsigned int arr[], int sz)
{
    // 1 - Create second array dynamically
    unsigned int *arr_2 = (unsigned int *)calloc(sz, sizeof(unsigned int));
    array_read(arr_2, sz);
    
    // 2 - Zip given arrays
    unsigned int* arr_zip = array_zip(arr, arr_2, sz);

    // 3 - Free second array
    free(arr_2);

    // 4 - Return resultant array's pointer
    return arr_zip;
}

unsigned int* array_zip(unsigned int arr_1[], unsigned int arr_2[], int sz)
{
    // 1 - Create array
    unsigned int *arr_zip = (unsigned int *)calloc(sz, sizeof(unsigned int));

    // 2 - Zip algorithm
    for(int i = 0; i < sz; i++)
    {
        arr_zip[i] = i % 2 == 0 ? arr_1[i] : arr_2[i];
    }

    // 3 - Return resultant array's pointer
    return arr_zip;
}

void array_lcm(unsigned int arr[], int sz)
{
    // Prerequisite: default value for least common multiple is 0
    int lcm = 0;

    // 1 - For each two elements in the array, display their least common multiple
    for (int i = 0; i < sz - 1; i++)
    {
        printf("Mínimo múltiplo comum dos elementos %d e %d: %d\n", arr[i], arr[i + 1], algo_lcm(arr[i], arr[i + 1]));
    }
}

int algo_gcd(int a, int b)
{
    //Could be a recursive function
    int tmp = b;

    // 1 - Determines the greatest common divisor between two given integers, while b does not equal to zero
    while (b != 0)
    {
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int algo_lcm(int a, int b)
{
    // 1 - Follows mathematical formula
    return (a * b) / algo_gcd(a, b);
}

unsigned int **array_matrix_prod(unsigned int arr[], unsigned int arr_asc[], int sz)
{
    // 1 - Create sz*sz matrix dynamically
    unsigned int **matrix = (unsigned int **)calloc(sz, sizeof(unsigned int *));

    for (int i = 0; i < sz; i++)
    {
        matrix[i] = (unsigned int *)calloc(sz, sizeof(unsigned int));
    }

    // 2 - Writing on the matrix
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            // 3 - Determines each element
            matrix[i][j] = arr[i] * arr_asc[j];
        }
    }

    return matrix;
}

void matrix_transposed(unsigned int **matrix, int sz)
{
    // 1 - Create matrix dynamically
    unsigned int **matrix_t = (unsigned int **)calloc(sz, sizeof(unsigned int *));

    for (int i = 0; i < sz; i++)
    {
        matrix_t[i] = (unsigned int *)calloc(sz, sizeof(unsigned int));
    }

    // 2 - Change swap indexes for each element
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            matrix_t[i][j] = matrix[j][i];
        }
    }

    // 3 - Display transposed matrix
    matrix_display(matrix_t, sz);

    // 4 - Freeing the matrix
    for (int i = 0; i < 20; i++)
    {
        free(matrix_t[i]);
    }
    free(matrix_t);
}
