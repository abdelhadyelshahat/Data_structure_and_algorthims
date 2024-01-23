/* Dependencied */
#include <stdio.h>
#include "Binary_search.h"

/* use this macro to determine the size of the array*/
#define ARRAY_SIZE  10

/* prototype of print array function */
void print_array (int * array , int array_size);

/* Testing the algorthim */
int main ()
{

/* declare sorted array 
* remember : the binary search algorthim is only applied on sorted list 
*/
    int array [ARRAY_SIZE] = {10 ,30 , 40, 42 , 55 , 60 , 100 , 111, 122 ,200};

    /* print the array before applaying the algrthim */
    printf("the sorted array ");
    print_array(array,ARRAY_SIZE);

    printf(" \n enter the element you want to search : ");
    int Searching_elment;
    scanf("%d",&Searching_elment);
    /* applaying the algorthim */
   int index_of_searching_element = Bianry_search(array,ARRAY_SIZE,Searching_elment);

   /* printing the index of the searching element */
   printf(" \n the searching element index id : %d  \n " , index_of_searching_element);



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