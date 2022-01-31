SRC = ./src
TARGET = ./target
CC = g++-9
CFLAGS = -std=c++2a -Wall -Werror
RM = rm -rf



all: clean compile


compile: vector
	$(CC) $(CFLAGS) -o $(TARGET)/main.out $(SRC)/main.cpp $(TARGET)/vector.o

vector:
	$(CC) $(CFLAGS) -c -o $(TARGET)/vector.o $(SRC)/vector.cpp

clean:
	$(RM) $(TARGET)/*.out

run:
	$(TARGET)/main.out