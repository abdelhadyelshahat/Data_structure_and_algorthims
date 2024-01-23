/* Binary search function 
* function name : Bianry_search 
* function parmeters : int * array , int arra_size , int value
* function return type : int (the index of the searching variable )
*/

int Bianry_search( int *array , int array_size , int value)
{

    /* we need three variables to keep track the array 
     * int start , middle , end ;
    */
   int start = 0; 
   int end = array_size -1 ;
   int middle= ( start + end )  / 2 ;

    while (start < end)
    {
        if (value == array[middle])
        {
                return middle;
        }
        else if (value < array[middle] )
        {
            end = middle -1;
            middle= ( start + end )  / 2 ;

        }
        else 
        {
            start = middle +1;
            middle= ( start + end )  / 2 ;
        }
    }
    



}