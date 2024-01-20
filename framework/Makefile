# Variables
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = free.c test_execute.c tests_preparetion.c
OBJ = $(SRC:.c=.o)
LIBFT_DIR = ../libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -I . -I $(LIBFT_DIR)

# Target
TARGET = libunit.a

# Default target
all: $(TARGET)

# Link
$(TARGET): $(LIBFT) $(OBJ)
	ar rcs $(TARGET) $(OBJ)

# Compile
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

# libft
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Clean up
clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

# Full Clean up
fclean: clean
	rm -f $(TARGET)
	$(MAKE) -C $(LIBFT_DIR) fclean

# Rebuild
re: fclean all

.PHONY: all clean fclean re