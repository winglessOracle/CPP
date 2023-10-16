# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wingessoracle <wingessoracle@student.co      +#+                      #
#                                                    +#+                       #
#    Created: 2023/06/21 08:27:49 by wingessorac   #+#    #+#                  #
#    Updated: 2023/10/16 15:06:47 by cwesseli      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

GREEN	:=	\033[32;1m
BLUE	:=	\033[34;1m
RESET	:=	\033[0m

CXX		 	?=	clang++
CFLAGS	 	=	-Wall -Wextra -Werror 
LDFLAGS		=	$(CFLAGS)

TARGET	 	=	PhoneBook
INCLUDE		=	./include
HEADERS		=	-I $(INCLUDE)
OBJ_FILES	=	PhoneBook.o Contact.o main.o

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	@echo -e "$(GREEN)Linking $(TARGET)$(RESET)"
	@$(CXX) $(LDFLAGS) -o $@ $^

$(OBJ_FILES): %.o: %.cpp
	@echo -e "$(GREEN)Compiling $@ $(RESET)"
	@$(CXX) $(CFLAGS) $(HEADERS) -c $< -o $@ 

clean:
	@echo -e "$(BLUE)Remoning OBJ files$(RESET)"
	@rm -f $(OBJ_FILES)

fclean: clean
	@echo -e "$(BLUE)Removing $(TARGET)$(RESET)"
	@rm -f $(TARGET)

re: fclean all

.PHONY:	all clean fclean re