#include "stack_with_arrays.h"
#include<stdio.h>


/* function to print the elements of the stack */
void print_entry (stack_entry element )
{
    printf("%d\n",element);
}







/* test the stack_with_arrays API`s */
int main ()
{

    stack New_stack ; 

    Intalize_stack(&New_stack);

    if(is_not_full)
    {
        Push(5,&New_stack);
    }

    if(is_not_full)
    {
        Push(10,&New_stack);
    }

    if(is_not_full)
    {
        Push(20,&New_stack);
    }
    
    stack_entry s_entry ;
    
    if(is_not_empty)
    {
        Pop(&s_entry,&New_stack);
    }



    Treverse_stack(&New_stack,print_entry);

    return 0;
}