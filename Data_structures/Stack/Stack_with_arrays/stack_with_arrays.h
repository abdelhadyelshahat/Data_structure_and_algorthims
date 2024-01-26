#ifndef STACK_WITH_ARRAYS_
#define STACK_WITH_ARRAYS_


/* define your stack size */
#define    MAx_STACK_SIZE    100

/* define your entery type*/
typedef int stack_entry ;


typedef struct Stack 
{
    /* create stack entries */
    stack_entry entry[MAx_STACK_SIZE];

    /* top index of the stack */
    int top_of_stack ; 

}stack;


/* *********************************************** 
*   pre  : there is a crated stack 
*   post : intilze your stack 
*   parmeters : pointer to stack
*   return : void 
**************************************************/
void Intalize_stack (stack * ps);

/*****************************************
 * pre : crate & intialized the stack 
 * post : check the stack is empty
 * parmeters : stack *ps (for sure the stack can pass by copy but for performance we will pass by refernce)
 * retturn : int 
****************************************/
int is_not_full(stack * ps);

/**************************************************
 * pre : crated stack & intialied it 
 * post : push elment in the stack 
 * parmeters : statck_entry , stack *ps
 * return : void  
*************************************************/
void Push( stack_entry , stack *ps);

/****************************
 * pre : crated & intializes a stack 
 * post : check if the stack is not empty 
 * parmeters : stack *ps 
 * return : int 
****************************/
int is_not_empty (stack * ps);

/**********************************
 * pre : created & intailzes the stack & stack is not empty 
 * post : pop the last element 
 * patmeters : stack_entry * pe ,stack *ps
 * return void 
******************************/
void Pop(stack_entry * pe, stack *ps);


/*****************************
 * pre : created & intialized a stacl 
 * post : return the size of the elements in the stack 
 * parameters : stack * ps
 * return : int size 
***********************************/
int Stack_size (stack * ps);

/****************************
 *  pre : created and intialized a stack & not empty 
 * post : back the last element in the stack 
 * parameters : stack *ps
 * return : void 
***********************************************/
void Top_of_stack (stack_entry* element , stack *ps);


/****************************************************
 * pre : intialzed stack
 * post : travese along the stack
 * parameters : stack *ps , pointer to function calling while traverse the elments of the stack
 * return : void 
******************************************************/
void Treverse_stack (stack *ps, void (*pf) (stack_entry element ));


/********************************
 * pre : intialzed the stack 
 * post : delete stack elements 
 * parameters : stack *ps
 * return : void  
*/
void Delete_stack (stack * ps);





#endif