# Tên chương trình
TARGET = main

# Compiler và flags
CC = gcc
CFLAGS = -Wall -O2 -std=c11

# Rule mặc định: build và run
all: $(TARGET)
	./$(TARGET)

# Build executable từ main.c
$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c -lm

# Xoá file build
clean:
	rm -f $(TARGET)
