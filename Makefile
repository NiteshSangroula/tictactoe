# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Iinclude

# Source files
SRC = src/main.c src/board.c src/game.c

# Object files (auto-generated from SRC)
OBJ = $(SRC:.c=.o)

# Executable name
TARGET = tictactoe

# Default target: build the program
all: $(TARGET)

# Link object files into executable
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files and executable
clean:
	rm -f $(OBJ) $(TARGET)
