#include "srcs.h"

void mini_sort(t_stack **a, int argc)
{
    t_stack *b;

    b = NULL;
    if (argc == 3)
        sort_three(a, &b);
    else if (argc == 4)
        sort_four(a, &b);
    else if (argc == 5)
        sort_five(a, &b);
}