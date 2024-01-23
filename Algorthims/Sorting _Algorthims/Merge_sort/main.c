/* Dependencied */
#include <stdio.h>
#include "Merge_sort.h"

/* use this macro to determine the size of the array*/
#define ARRAY_SIZE  10

/* prototype of print array function */
void print_array (int * array , int array_size);

/* Testing the algorthim */
int main ()
{

    int array [ARRAY_SIZE] = { 10 , 50 , 2, 6 , 11 , 4 , 5 , 6 , 85 ,0 };

    /* print the array before applaying the algrthim */
    printf("the un sorted array " );
    print_array(array,ARRAY_SIZE);

    /* applaying the algorthim */
    Merge_sort(array,ARRAY_SIZE);

     /* print the array after applaying the algrthim */
    printf(" \nthe sorted sorted array " );
    print_array(array,ARRAY_SIZE);



    return 0;
}

/* print array fucncion 
*  function name : print_array
*  function parameters : int * array , int array_size 
*  function return : void 
*/

void print_array (int * array , int array_size)
{
    printf("\n");
    /*looping the array and print each element */
    for (int index = 0 ; index < array_size ; index++)
    {
        printf("%d \t",array[index]);
    }
     printf("\n");
}