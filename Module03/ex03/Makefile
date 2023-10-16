**************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wingessoracle <wingessoracle@student.co      +#+                      #
#                                                    +#+                       #
#    Created: 2023/06/21 08:27:49 by wingessorac   #+#    #+#                  #
#    Updated: 2023/07/20 11:51:10 by carlowessel   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#= Colors =#
GREEN	:=	\033[32;1m
BLUE	:=	\033[34;1m
RESET	:=	\033[0m

#= Variables = #
TARGET	 	?=	diamond
CXX		 	?=	c++
CFLAGS	 	?=	-Wall -Wextra -Werror -std=c++98
LDFLAGS	 	?=	$(CFLAGS)

#= Locations =#
INCLUDE		=	./include
HEADERS		=	-I $(INCLUDE)
OBJ_FILES	=	$(addprefix obj/, main.o ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o)

all: $(TARGET)

#= Linking =#
$(TARGET): $(OBJ_FILES)
	@echo -e "$(GREEN)Linking $(TARGET)$(RESET)"
	@$(CXX) $(LDLAGS) -o $@ $^

#= Compiling =#
$(OBJ_FILES): obj/%.o: src/%.cpp
	@mkdir -p $(dir $@)
	@echo -e "$(GREEN)Compiling $@ $(RESET) $(notdir $<)"
	@$(CXX) $(CFLAGS) $(HEADERS) -c -o $@ $<
	
#= Cleaning =#
clean:
	@echo -e "$(BLUE)Remoning OBJ files$(RESET)"
	@rm -rf obj/

fclean: clean
	@echo -e "$(BLUE)Removing $(TARGET)$(RESET)"
	@rm -rf $(TARGET)

re: fclean all

.PHONY:	all clean fclean re