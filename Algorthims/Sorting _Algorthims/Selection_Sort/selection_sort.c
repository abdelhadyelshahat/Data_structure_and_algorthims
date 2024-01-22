

/* sawp elements function 
*  function name : swap
*  function parameters : int * first_element , int second_element 
*  function return : void 
*/
void swap ( int * first_element , int * second_element)
{
    int temp_elment = *first_element;
    * first_element = * second_element ;
    * second_element  = temp_elment ;
}



/* seletion sort function 
*  function name : seletion_sort 
*  function parameters : int * array , int array_size 
*  function return : void 
*/

void selection_sort ( int * array , int array_size)
{
    /* varaible to hold the minmum variable index in the array*/
    int min_index;

    /* outer loop for looping on each element in the array */
    for ( int outer_index = 0 ; outer_index < array_size  -1 ; outer_index++)
    {
        min_index = outer_index ; 

        /* inner loop for fetching on the min varible in the array and get its index 
        *  every inner loop will loop only the reste unsorted elements
        */
        for ( int inner_index = outer_index +1 ; inner_index < array_size ; inner_index++)
        { 
            if (array[inner_index] < array[min_index])
                {min_index = inner_index;}
        }

        /* check if the min_index changed or not 
        *  this step of our code optmize our algorthim by not sawping the elements if there is not change 
        */
        if (min_index != outer_index)
        {
            swap (&array[min_index], &array[outer_index]);
        }
    }


}

