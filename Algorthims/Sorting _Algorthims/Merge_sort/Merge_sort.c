/* merge sort fuction 
* function name : Merge
* function parmeters : int * main_array , int * left_array , int right_array ,int array_size 
* function return : void 
*/

void Merge ( int * main_array , int *left_array , int * right_array , int array_size)
{
    /* merge function is merge & sort two sorted array in bigger one*/

    /* first time to enterd this function is whin left & right arrays in only one element 
        which is sorted 
    */

    /* get the  size of left & right arrays*/
    int left_array_size = array_size / 2 ; 
    int right_array_size = array_size- left_array_size;

    /*we have three arrays so we need three indexs to keep track each array*/
    int main_array_index = 0 , left_array_index =0 , right_array_index =0 ;

    /* looping on the left & right array and copy with order in the main array */
    while ( left_array_index < left_array_size && right_array_index < right_array_size)
    {
        if ( left_array[left_array_index] <= right_array[right_array_index])
        {
            /*copy the left element in the main array */
            main_array[main_array_index] = left_array[left_array_index];
            
            /* increment the indexs of the left and main arrays*/
            left_array_index++ ; 
            main_array_index ++;

        }
        else 
        {
            /*copy the right element in the main array */
            main_array[main_array_index] = right_array[right_array_index];

            /* increase the right and the main arrras indexs*/
            right_array_index++;
            main_array_index++;
        }
    }

    /* clean up code */

    /* if there still elements in the left array */
    while ( left_array_index < left_array_size)
    {
        /*copy the left element in the main array */
        main_array[main_array_index] = left_array[left_array_index];
        
        /* increment the indexs of the left and main arrays*/
        left_array_index++ ; 
        main_array_index ++;

    }

    /*if there are elemens in the right array */
    while (right_array_index < right_array_size)
    {
        /*copy the right element in the main array */
        main_array[main_array_index] = right_array[right_array_index];
        /* increase the right and the main arrras indexs*/
        right_array_index++;
        main_array_index++;

    }


}



/* merge sort fuction 
* function name : Merge_sort 
* function parmeters : int * array , int array_size 
* function return : void 
*/

void Merge_sort ( int * array , int array_size)
{
    /* merge sort algirthim used divide and conqure technique 
    *  base case is an array of one element 
    *  so first step in our algorthim is to sptit the array and keep splitng until get to the base case 
    */
    
    /* terminate the recurdive calling condition && if the array is only one element or empty */
    if ( array_size <= 1)
        return;
    
    /* get the splited arrays size */
    int left_array_size = array_size / 2 ; 
    int right_array_size = array_size - left_array_size ; 

    /* declare the left and right array */
    int left_array[left_array_size] ;
    int right_array[right_array_size];

    /* copy the values of the main array to the left and right array*/
    for (int index =0 ; index < left_array_size ; index++)
    { 
        left_array[index] = array[index];
    }

     for (int index =0 ; index < right_array_size ; index++)
    { 
        right_array[index] = array[index + left_array_size];
    }

    /* keep split the arrays until get to the base case */
    Merge_sort(left_array,left_array_size);
    Merge_sort(right_array,right_array_size);

    /* calling the merge function */
    Merge(array,left_array,right_array,array_size);
}