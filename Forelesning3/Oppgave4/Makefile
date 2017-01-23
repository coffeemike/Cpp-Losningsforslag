# Wich compiler to use
NAME=Oppgave4

CXX=g++

# Wich options to compile with
CXXFLAGS=-std=c++11 -Wall -Wextra -g

# Linking libraries
LDFLAGS=../Oppgave3/src/Person.cpp

SOURCES=main.cpp LinkedList.cpp Node.cpp
SRC_FILES=$(addprefix src/,$(SOURCES))

default: $(SRC_FILES)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o bin/$(NAME)
run:
	./bin/$(NAME)
clean:
	rm bin/$(NAME)
