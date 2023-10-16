# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wingessoracle <wingessoracle@student.co      +#+                      #
#                                                    +#+                       #
#    Created: 2023/06/21 08:27:49 by wingessorac   #+#    #+#                  #
#    Updated: 2023/10/16 15:06:57 by cwesseli      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

GREEN	:=	\033[32;1m
BLUE	:=	\033[34;1m
RESET	:=	\033[0m

CXX		 	?=	clang++
CFLAGS	 	=	-Wall -Wextra -Werror -std=c++98
OBJ_FILES	= Account.o tests.o
TARGET		= tests

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	@echo -e "$(GREEN)Linking $(TARGET)$(RESET)"
	@$(CXX) $(CFLAGS) -o $@ $^

$(OBJ): %.o: %.cpp
	@echo -e "$(GREEN)Compiling $@ $(RESET)"
	@$(CXX) $(CFLAGS) Account.h -c $< -o $@ 

clean:
	@echo -e "$(BLUE)Removing obj_files$(RESET)"
	@rm -f $(OBJ_FILES)
	
fclean: clean
	@echo -e "$(BLUE)Removing $(TARGET)$(RESET)"
	@rm -f $(TARGET)

re: fclean all

.PHONY:	all clean fclean re
