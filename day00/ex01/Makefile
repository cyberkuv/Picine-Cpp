#Name of executable program
NAME := phonebook

#Compiler and flags
TAG := clang++
CPPFLAGS := -Wall -Werror -Wextra

#Sorces to objects
SRCS := phonebook.cpp\
		contacts.cpp\
		
OBJS := $(SRCS:.cpp=.o)

#Compilation
all: $(NAME)

$(NAME): $(OBJS)
	@$(TAG) $(OBJS) -o $@

#Object files creation
%.o: %.cpp
	@$(TAG) $(CPPFLAGS) -o $@ -c $<
	@echo "\033[32;1m---$(NAME) Compiled---\033[32;0m"

#Deleting Executable
clean:
	@rm -rf $(NAME)
	@echo "\033[33;1m---$(NAME) Deleted---\033[31;0m"

#Deleting object files
fclean: clean
	@rm -rf $(OBJS)
	@echo "\033[31;1m---$(OBJS) Deleted---\033[31;0m"

#Remaking everything
re: fclean all

.PHONY: all clean fclean re