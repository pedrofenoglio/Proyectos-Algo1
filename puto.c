stack_elem *stack_to_array(stack s){
    assert(!stack_is_empty(s));
    stack_elem *array = NULL;
    if (stack_size(s) > 0) { 
      array = calloc(stack_size(s), sizeof(stack_elem));
      stack p = s;
      unsigned int i = stack_size(s)-1;
      while(p != NULL){
          array[i] = p->nodo;
          i--;
          p = p->next;
      }
    }  
    return array;
}
