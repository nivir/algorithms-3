/*
** program name: stack.h
** author:       luo feng
** date:         2013/9/12
*/

#ifndef _STACK_H
#define _STACK_H
#include "status.h"

#define	STACK_SIZE	256

//stack type definition
typedef int stack_elem;
typedef stack_elem *stack;

//stack definition
stack_elem Stack[STACK_SIZE];
int stack_index;

//stack operation declare
status stack_init();
status stack_push(stack_elem);
status stack_pop(stack_elem*);
status stack_top(stack_elem*);

#endif
