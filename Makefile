CC        := gcc
C_FLAGS   := -Wall -Wextra -std=c11 -g

BIN	   := bin
SRC	   := src
INCLUDE  := include
LIB	   := lib

LIBRARIES   := 
EXECUTABLE  := main

all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.c
	$(CC) $(C_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)

clean:
	-rm $(BIN)/*
