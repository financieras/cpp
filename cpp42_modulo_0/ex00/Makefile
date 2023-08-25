# Folders and Names
NAME      = megaphone
SRCSDIR   = .
OBJSDIR   = objs
INCLUDES  = .

# Source files and object files
SRCS      = megaphone.cpp
OBJS      = $(addprefix $(OBJSDIR)/,$(SRCS:.cpp=.o))

# Compiler options
CC        = clang++
CFLAGS    = -Wall -Wextra -Werror -std=c++98 -I$(INCLUDES)


all: $(NAME)

$(NAME): $(OBJS)
	@echo "Linking $@"
	@$(CC) $(CFLAGS) -o $@ $^

$(OBJSDIR)/%.o: $(SRCSDIR)/%.cpp | $(OBJSDIR)
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) -c -o $@ $<

$(OBJSDIR):
	@mkdir -p $(OBJSDIR)

clean:
	@echo "Cleaning objects..."
	@rm -rf $(OBJSDIR)

fclean: clean
	@echo "Cleaning $(NAME)..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re