#include <stdlib.h>
#include <assert.h>
#include "stack.h"
 

struct _s_stack{
    struct _s_stack *next;
    stack_elem nodo;
};


stack stack_empty(){
    stack s = NULL;
    return s;
}


stack stack_push(stack s, stack_elem e){
    stack new = malloc(sizeof(struct _s_stack));
    new->nodo = e;
    new->next = s;
    s = new;
    return s;
}

stack stack_pop(stack s){
    assert(!stack_is_empty(s));
    stack new = s;
    s = s->next;
    free(new);
    return s;
}

unsigned int stack_size(stack s){
    unsigned int i = 0;
    stack p = s;
    while(p != NULL){
        ++i;
        p = p->next;
    }
    return i;
}

stack_elem stack_top(stack s){
    assert(!stack_is_empty(s));
    stack_elem elem = s->nodo;
    return elem;
}


bool stack_is_empty(stack s){
    bool b = (NULL == s);
    return b;
}

stack_elem *stack_to_array(stack s){
    assert(!stack_is_empty(s));
    stack_elem *array = NULL;
    stack p = s;
    for (unsigned int counter = 0; counter<stack_size(s);counter++){
        array[counter] = p->nodo;
        p = p->next;
    }
    return array;
}

stack stack_destroy(stack s){
    
}