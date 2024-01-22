/* Dependencied */
#include <stdio.h>
#include"Buble_sort.h"

/* use this macro to determine the size of the array*/
#define ARRAY_SIZE  10

/* prototype of print array function */
void print_array (int * array , int array_size);

/* Testing the algorthim */
int main ()
{
    /* declare unsorted array */
    int array [ARRAY_SIZE] = { 10 , 50 , 2, 6 , 11 , 4 , 5 , 6 , 85 ,0 };

    /* print the array before applaying the algrthim */
    printf("the array before buble sort sorting ");
    print_array(array,ARRAY_SIZE);

    /*apply the algorthim */
    Buble_sort(array,ARRAY_SIZE);

    /* printing the array after applaying the algorthim*/
    printf(" the array after sorting ");
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
        printf("%d ,",array[index]);
    }
     printf("\n");
}