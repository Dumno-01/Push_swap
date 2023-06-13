SRCS	=	parssing.c\
			push_swap_utils.c\
			swaping.c\
			algo.c\
			sort_small_stacks.c\

HEAD	=	push_swap.h

OBJS	=	$(SRCS:.c=.o)

NAME	=	push_swap

ARC		=	ar rc

CC		=	cc

RM		=	rm -f

FLAG	=	-Wall -Wextra -Werror

%.o: %.c $(HEAD)
		$(CC) $(FLAG) -c $< -o $@ -I. -I./libft

$(NAME)	:	$(OBJS)
		make -C libft
		$(CC) $(OBJS) -L./libft -lft -o $(NAME)

all:	$(NAME)

clean:
		make clean -C libft
		$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
		make fclean -C libft
		$(RM) $(NAME)

re:			fclean all

.PHONY	:	all clean flean re
