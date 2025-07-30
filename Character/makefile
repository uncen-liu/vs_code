CC = gcc
CFLAGS = -Wall -g
TARGET = main.exe

SRCS = main.c Hero.c Hero.h
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) -o $@ $^

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    del /Q *.o *.exe

.PHONY: all clean