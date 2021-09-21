#include "operations.h"


int main()
{
    t_stack *a;
    t_stack *b;

    a = new_node(1);
    push(&a, new_node(2));
    push(&a, new_node(3));
    push(&a, new_node(4));
    push(&a, new_node(5));
    push(&a, new_node(6));


    b = new_node(10);
    push(&b, new_node(11));
    push(&b, new_node(12));
    push(&b, new_node(13));
    push(&b, new_node(14));
    push(&b, new_node(15));

    display_stack(a, STACK_A);
    display_stack(b , STACK_B);
    
    ft_putstr("\n===============\n");
    rev_rotation(&a, &b, STACK_A_B);
    rev_rotation(&a, &b, STACK_A_B);
    rev_rotation(&a, &b, STACK_A_B);
    display_stack(a, STACK_A);
    display_stack(b, STACK_B);
}