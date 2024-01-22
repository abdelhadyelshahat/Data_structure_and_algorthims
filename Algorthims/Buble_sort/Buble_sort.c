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


/* Buble sort Algorthim function
*  function name : Buble_sort 
*  parmeters     : int * array , int array_size 
*  return        : void 
*/
void Buble_sort ( int *array , int array_size)
{
    /* var used to check the number of swaps in each iteration in the outer loop */
    int sawp_counts = 0;

    /* outer loop for looping over each element in the array */
    for ( int outer_index = 0 ; outer_index < array_size - 1 ; outer_index++)
    {
        /*inner loop to check every the value of each element in the array ( serving the outer loop )*/
        for ( int inner_index  = 0 ; inner_index < array_size - outer_index - 1 ; inner_index++)
        {
            /* checking the elements to swap */
            if ( array[inner_index +1] < array[inner_index])
            {
                swap(&array[inner_index], &array[inner_index+1]);
                
                /* update the swap counter*/
                sawp_counts +=1;
            }
        }
        /* optimize the Alogrthim 
        *  if there is no swaps in outer loop iterations => the array is sorted (break the algorthim) 
        */
        if (sawp_counts == 0)
        {
            break ;
        }
    }
}