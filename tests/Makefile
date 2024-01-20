# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror -I../framework -I../libft
LIBS = -L../framework -lunit -L../libft -lft
SRC =  main.c strlen/00_launcher.c strlen/01_basic_test.c\
 		strlen/02_null_test.c strlen/03_long_test.c strlen/04_null_char_test.c\
		 strlen/05_emoji_test.c   atoi/00_launcher.c atoi/01_basic_test.c atoi/02_null_test.c\
		 atoi/03_long_test.c atoi/04_null_char_test.c atoi/05_negative_test.c\
		 strcmp/00_launcher.c strcmp/01_equal_test.c strcmp/02_diff_len_test.c strcmp/03_diff_len_rev_test.c \
		 strcmp/04_case_test.c strcmp/05_null_char_test.c
OBJ = $(SRC:.c=.o)
TARGET = tests

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