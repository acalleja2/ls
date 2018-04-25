# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acalleja <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 20:58:53 by acalleja          #+#    #+#              #
#    Updated: 2018/04/25 19:58:15 by acalleja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_strcat.c\
	  ft_strcmp.c\
	  ft_strcpy.c\
	  ft_strdup.c\
	  ft_strlcat.c\
	  ft_strncat.c\
	  ft_strlen.c\
	  ft_strncpy.c\
	  ft_strstr.c\
	  ft_strnstr.c\
	  ft_strchr.c\
	  ft_isalpha.c\
	  ft_isdigit.c\
	  ft_isalnum.c\
	  ft_isascii.c\
	  ft_isprint.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_strncmp.c\
	  ft_atoi.c\
	  ft_strrchr.c\
	  ft_memset.c\
	  ft_bzero.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memmove.c\
	  ft_memchr.c\
	  ft_memcmp.c\
	  ft_memalloc.c\
	  ft_memdel.c\
	  ft_strnew.c\
	  ft_strdel.c\
	  ft_strclr.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_strequ.c\
	  ft_strnequ.c\
	  ft_strsub.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_strsplit.c\
	  ft_itoa.c\
	  ft_putchar.c\
	  ft_putstr.c\
	  ft_putendl.c\
	  ft_putnbr.c\
	  ft_putchar_fd.c\
	  ft_putstr_fd.c\
	  ft_putendl_fd.c\
	  ft_putnbr_fd.c\
	  ft_lstnew.c\
	  ft_lstdelone.c\
	  ft_lstdel.c\
	  ft_lstadd.c\
	  ft_lstiter.c\
	  ft_lstmap.c\
	  ft_recursive_factorial.c\
	  ft_recursive_power.c\
	  ft_sqrt.c\
	  ft_list_size.c\
	  ft_is_prime.c\
	  ft_list_push_back.c\
	  ft_strndup.c\
	  ft_realloc.c\
	  ft_strsuppr.c\
	  ft_itoa_base.c\
	  ft_ltoa_base.c\
	  ft_ltoa.c\
	  ft_strcapitalize.c\
	  ft_strcaps.c\
	  ft_strncat_null.c\
	  ft_stremplace.c\
	  ft_iltoa.c\
	  ft_iltoa_base.c\
	  ft_lltoa.c\
	  ft_lltoa_base.c\
	  ft_lonltoa_base.c\
	  ft_wlen.c\
	  ft_strjoin_free.c\
	  ft_strcat_free.c\
	  get_next_line.c\
	  ft_latoi.c\
	  ft_isalldigit.c\
	  print/ft_printf.c\
	  print/unicode_s.c\
	  print/unicode_s2.c\
	  print/unicode_c.c\
	  print/put1.c\
	  print/put2.c\
	  print/put3.c\
	  print/put4.c\
	  print/put5.c\
	  print/pars1.c\
	  print/pars2.c\
	  print/buf1.c\
	  print/flags1.c\
	  print/flags2.c\
	  ealloc.c

OBJ=$(SRC:.c=.o)

$(INCLUDE) : libft.h

all: $(NAME)

$(NAME): $(OBJ)
	make -C print/
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	gcc -g -Wall -Werror -Wextra -c $<

clean:
	make -C print/ clean
	rm -rf $(OBJ)

fclean: clean
	make -C print/ fclean
	rm -rf $(NAME)

re: fclean all
	make -C print/ re

.PHONY: fclean clean re
