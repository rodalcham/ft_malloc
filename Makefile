# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/25 12:07:46 by rchavez           #+#    #+#              #
#    Updated: 2024/06/25 16:51:26 by rchavez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CFILES = \
	ft_malloc_bad.c ft_malloc.c globals.c list.c

O_FOLDER = OBJ/

OFILES = $(CFILES:%.c=$(O_FOLDER)%.o)

CC = cc

NAME = ft_malloc.a

LIB = ft_malloc.h

CFLAGS = -Wall -Werror -Wextra -c

all: $(O_FOLDER) $(NAME)

$(NAME) : $(LIB) $(OFILES)
	ar rcs $(NAME) $(OFILES)

$(O_FOLDER)%.o : %.c
	$(CC) $(CFLAGS) -include $(LIB) -o $@ $^

$(O_FOLDER) :
	@if [ ! -d $(O_FOLDER) ]; then\
		mkdir $(O_FOLDER);\
	fi

clean :
	@if [ -d $(O_FOLDER) ]; then\
		rm -fr $(O_FOLDER);\
	fi

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re