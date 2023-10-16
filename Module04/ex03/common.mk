# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    common.mk                                          :+:    :+:             #
#                                                      +:+                     #
#    By: cwesseli <cwesseli@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/07/19 17:26:03 by cwesseli      #+#    #+#                  #
#    Updated: 2023/10/16 16:19:42 by cwesseli      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#=============Compiler and Flags===============================================#
CXX		 	?=	c++
CFLAGS	 	?=	-Wall -Wextra -Werror -Wpedantic -std=c++98
LDFLAGS	 	?=	$(CFLAGS)


#=============Directories and include==========================================#
INCLUDE		?=	./include
HEADERS		?=	-I$(INCLUDE)
SRC_DIR		?=	./src
OBJ_DIR		=	./obj


#=============Options==========================================================#
run:
	make && ./$(TARGET)

debug:	CFLAGS = -Wall -Wextra -g
debug:	re
	@echo -e "$(YELLOW)\n!-DEBUG MODE-!\n$(RESET)"

val:	CFLAGS = -Wall -Wextra -g
val:	re
	valgrind --leak-check=full --show-leak-kinds=all -s ./$(TARGET)

shadow:	CFLAGS += -Wshadow
shadow:	re
	@echo -e "$(YELLOW)\nCOMPILED WITH -Wshadow\n$(RESET)"

#=============Other=============================================================#

.PHONY:	all clean fclean re debug run val shadow


#=============Colors============================================================#

RESET	=	\033[0m
GREEN	=	\033[32;1m
BLUE	=	\033[34;1m
RED		=	\033[0;31m
YELLOW	=	\033[0;33m