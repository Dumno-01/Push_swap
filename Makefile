SRCS	=	

HEAD	=	push_swap.h

OBJS	=	$(SRCS:.c=.o)

NAME	=	push_swap.a

ARC		=	ar rc

CC		=	cc

RM		=	rm -f

FLAG	=	-Wall -Wextra -Werror

%.o: %.c $(HEAD)
		$(CC) $(FLAG) -c $< -o $@ -I.

$(NAME)	:	$(OBJS)
		$(ARC) $(NAME) $(OBJS)

all:	$(NAME)

clean:
		$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
		$(RM) $(NAME)

re:			fclean all

.PHONY	:	all clean flean re
