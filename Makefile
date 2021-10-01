NAME = push_swap

LIBFT = srcs/libft/libft.a

SRCS = main.c	operations/rev_rotation.c operations/rotate.c operations/rotation.c \
				operations/rrotate.c operations/swap.c operations/swap_a_b.c \
				srcs/max.c srcs/mini_sort.c srcs/push_swap.c srcs/sort.c srcs/sort_five.c \
				srcs/sort_four.c srcs/sort_three.c srcs/check_params_errors.c srcs/contain_duplicaates.c \
				srcs/index_and_fill.c srcs/is_sorted.c srcs/min.c srcs/node_position.c srcs/max_data.c \
				stack/copy_node.c stack/display_stack.c stack/free_stack.c stack/las_node.c stack/new_node.c \
				stack/pop.c stack/pop_back.c stack/push.c stack/push_a_b.c stack/push_back.c \
				stack/stack_len.c stack/top_index.c

all : $(NAME)

$(NAME):
		make -C srcs/libft/
		make clean -C srcs/libft/
		gcc -Wall -Werror -Wextra -g $(SRCS) $(LIBFT) -o $(NAME)

clean:
		make clean -C srcs/libft/
fclean:
		make fclean -C srcs/libft/
		rm -rf $(NAME)

re: fclean all

sanitize:
		make -C srcs/libft/
		make clean -C srcs/libft/
		gcc -Wall -Werror -Wextra -g -fsanitize=address $(SRCS) $(LIBFT) -o $(NAME)
