SRC = ./src
TARGET = ./target
CC = g++-9
CFLAGS = -std=c++2a -Wall -Werror
RM = rm -rf



all: clean compile


compile:
	$(CC) $(CFLAGS) -o $(TARGET)/main.out $(SRC)/main.cpp

clean:
	$(RM) $(TARGET)/*.out

run:
	$(TARGET)/main.out