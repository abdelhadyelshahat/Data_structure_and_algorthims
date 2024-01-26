#include "stack_with_arrays.h"


/* *********************************************** 
*   pre  : there is a crated stack 
*   post : intilze your stack 
*   parmeters : pointer to stack
*   return : void 
**************************************************/
void Intalize_stack (stack * ps)
{
    /* set the top of the stack with first empty to push on it */
    ps->top_of_stack = 0;
}



/*****************************************
 * pre : crate & intialized the stack 
 * post : check the stack is empty or not
 * parmeters : stack *ps (for sure the stack can pass by copy but for performance we will pass by refernce)
 * retturn : int 
****************************************/

int is_not_full(stack * ps)
{
    if (ps->top_of_stack >= MAx_STACK_SIZE)
    {
        return 0;
    }
    else 
    {
        return 1;
    }
}

/**************************************************
 * pre : crated stack & intialied it & stack not full 
 * post : push elment in the stack 
 * parmeters : statck_entry , stack *ps
 * return : void  
*************************************************/
void Push( stack_entry element  , stack *ps)
{
    /* push elment to the stack */
    ps->entry[ps->top_of_stack] = element ; 

    /* incrment the top of the stack */
    (ps->top_of_stack)++;
    
}

/****************************
 * pre : crated & intializes 
 * post : check if the stack is not empty
 * parmeters : stack *ps 
 * return : int 
******************************/
int is_not_empty (stack * ps)
{
    if (ps->top_of_stack > 0 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



/**********************************
 * pre : created & intailzes the stack & stack is not empty 
 * post : pop the last element 
 * patmeters : stack_entry * pe ,stack *ps
 * return void 
******************************/
void Pop(stack_entry * pe, stack *ps)
{
    /* pop the last elment on the stack */
    *pe = ps->entry[ps->top_of_stack];

    /*decrement the top of the stack */
    ps->top_of_stack--;
}

/*****************************
 * pre : created & intialized a stack
 * post : return the size of the elements in the stack 
 * parameters : stack * ps
 * return : int size 
***********************************/
int Stack_size (stack * ps)
{
    /* the top of stack refrell to the number of elments in the sack  */
    return  (ps->top_of_stack ); 
}

/****************************
 *  pre : created and intialized a stack & not empty 
 * post : back the last element in the stack 
 * parameters : stack *ps
 * return : void 
***********************************************/
void Top_of_stack (stack_entry* element , stack *ps)
{
    *element = ps->entry[ps->top_of_stack -1];
}

/****************************************************
 * pre : intialzed stack
 * post : travese along the stack
 * parameters : stack *ps , pointer to function calling while traverse the elments of the stack
 * return : void 
******************************************************/
void Treverse_stack (stack *ps, void (*pf) (stack_entry element ))
{
    for (int index = (ps->top_of_stack) -1 ; index >= 0 ; index--)
    {
        pf(ps->entry[index]);

    }

}

/********************************
 * pre : intialzed the stack 
 * post : delete stack elements 
 * parameters : stack *ps
 * return : void  
*/
void Delete_stack (stack * ps)
{

    ps->top_of_stack =0;
}