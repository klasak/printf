# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: klasak <klasak@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/20 09:21:04 by klasak        #+#    #+#                  #
#    Updated: 2021/10/22 10:37:30 by klasak        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

HEADER_FILE		= ft_printf.h

SRCS			= ft_printf.c\
				ft_switch.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_strlen.c\
				ft_itoa.c\
				ft_utoa.c\
				ft_ubase.c\
				ft_ulbase.c\
				ft_capitalize_hex.c\
				ft_csp.c

OBJ_FILES		= $(SRCS:.c=.o)

CFLAGS			= -Wall -Werror -Wextra

cc				= gcc

all:			$(NAME)

$(NAME):		$(OBJ_FILES)
				ar -rcs $(NAME) $(OBJ_FILES)

%.o: 	%.c $(HEADER_FILE)
			$(cc) -c $(CFLAGS) -o $@ $<

clean:
			rm -f $(OBJ_FILES)

fclean:	clean
			rm -f $(NAME)

re:			fclean all

.PHONY:			all clean fclean re %.o