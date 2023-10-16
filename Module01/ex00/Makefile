# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wingessoracle <wingessoracle@student.co      +#+                      #
#                                                    +#+                       #
#    Created: 2023/06/21 08:27:49 by wingessorac   #+#    #+#                  #
#    Updated: 2023/10/16 15:08:08 by cwesseli      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# = Colors =
GREEN	:=	\033[32;1m
BLUE	:=	\033[34;1m
RESET	:=	\033[0m

# = Variables = #
CXX		 	?=	c++
CFLAGS	 	=	-Wall -Wextra -Werror -std=c++98

TARGET	 	=	zombies
OBJ_FILES	=	Zombie.o newZombie.o randomChump.o main.o

all: $(TARGET)

# = Linking = #
$(TARGET): $(OBJ_FILES)
	@echo -e "$(GREEN)Linking $(TARGET)$(RESET)"
	@$(CXX) $(CFLAGS) -o $@ $^

# = Compiling = #
$(OBJ_FILES): %.o: %.cpp
	@echo -e "$(GREEN)Compiling $@ $(RESET)"
	@$(CXX) $(CFLAGS) -c $< -o $@
	
# = Cleaning = #
clean:
	@echo -e "$(BLUE)Remoning OBJ files$(RESET)"
	@rm -f $(OBJ_FILES)

fclean: clean
	@echo -e "$(BLUE)Removing $(TARGET)$(RESET)"
	@rm -f $(TARGET)

re: fclean all

.PHONY:	all clean fclean re
