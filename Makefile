# Compiler to use
CC = gcc

# Warning flags
CFLAGS = -std=c23 -Wall -Wextra

# Output directory for compiled binaries
BIN = bin

# Executable names managed by this Makefile
PROGRAM_NAME = character_displayer

# Full paths to compiled binaries
PROGRAM = $(BIN)/$(PROGRAM_NAME)

# Linker flags (libraries used at final linking stage)
LDFLAGS = -lglut -lGLU -lGL

# Phony targets (do not represent files; always executed)
.PHONY: all clean run

# Default target
all: $(PROGRAM)

# Build program
$(PROGRAM): main.c | $(BIN)
	$(CC) main.c $(CFLAGS) -o $@ $(LDFLAGS)

# Create bin directory
$(BIN):
	mkdir -p $(BIN)

# Run program
run: $(PROGRAM)
	./$(PROGRAM)


# Remove compiled binaries
clean:
	rm -rf $(BIN)
