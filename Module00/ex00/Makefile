# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: wingessoracle <wingessoracle@student.co      +#+                      #
#                                                    +#+                       #
#    Created: 2023/06/21 08:27:49 by wingessorac   #+#    #+#                  #
#    Updated: 2023/10/16 15:06:32 by cwesseli      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

GREEN	:=	\033[32;1m
BLUE	:=	\033[34;1m
RESET	:=	\033[0m

CXX		 	?=	clang++
CFLAGS	 	=	-Wall -Wextra -Werror -std=c++98

TARGET	 	=	megaphone
SRCS		=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	@echo -e "$(GREEN)Linking $(TARGET)$(RESET)"
	@$(CXX) $(CFLAGS) -o $@ $^

$(OBJS): %.o: %.cpp
	@echo -e "$(GREEN)Compiling $(TARGET)$(RESET)"
	@$(CXX) $(CFLAGS) -c $< -o $@ 

clean:
	@echo -e "$(BLUE)Remoning OBJ files$(RESET)"
	@rm -f $(OBJS)

fclean: clean
	@echo -e "$(BLUE)Removing $(TARGET)$(RESET)"
	@rm -f $(TARGET)

re: fclean all

.PHONY:	all clean fclean re