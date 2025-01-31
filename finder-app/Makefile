# Define the compiler
CROSS_COMPILE = aarch64-none-linux-gnu-
CC = gcc

# Define compiler flags
CFLAGS = -Wall -g

# Define the target executable
TARGET = writer

# Define the source files
SRCS = writer.c

# Define the object files
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Rule to link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean

