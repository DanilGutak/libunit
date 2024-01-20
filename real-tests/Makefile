# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror -I../framework -I../libft
LIBS = -L../framework -lunit -L../libft -lft
SRC = buserror.c main.c segfault.c sample/00_launcher.c sample/01_basic_test_ok.c sample/02_basic_test_ko.c sample/03_basic_test_seg.c sample/04_basic_test_bus.c 
OBJ = $(SRC:.c=.o)
TARGET = sampletests

# Default rule
all: $(TARGET)

# Rule to make the target
$(TARGET): $(OBJ)
	$(MAKE) -C ../framework
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

# Rule to make the object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean the build files
clean:
	$(MAKE) -C ../framework clean
	rm -f $(OBJ)

# Rule to fully clean the build files and the executable
fclean: clean
	$(MAKE) -C ../framework fclean
	rm -f $(TARGET)

# Rule to rebuild the project
re: fclean all

test: all
	./$(TARGET)
.PHONY: all clean fclean re test