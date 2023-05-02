NAME	=	bank_manager

CC		= 	cc

RM		=	rm -f

SRC_DIR	=	./SRC/

SRC_MAIN	=	$(SRC_DIR)main/Main.cpp

SRC	=	$(SRC_MAIN)										\
		$(SRC_DIR)account/Account.cpp					\
		$(SRC_DIR)actor/Actor.cpp						\
		$(SRC_DIR)actor/advisor/Advisor.cpp				\
		$(SRC_DIR)actor/customer/Customer.cpp			\
		$(SRC_DIR)transaction/Transaction.cpp

OBJ		= 	$(SRC:%.c=%.o)

CFLAGS	= 	-Iinclude -W -Wall -Wextra -Wshadow

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) -lstdc++

clean:
		$(RM) *.o

fclean:		clean
		$(RM) $(NAME)
		$(RM) $(NAME_TEST)

re: 	fclean all

.PHONY: all clean fclean re