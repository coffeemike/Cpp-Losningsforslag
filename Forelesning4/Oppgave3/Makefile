# Wich compiler to use
NAME=Oppgave3

CXX=g++

# Wich options to compile with
CXXFLAGS=-std=c++11 -Wall -Wextra

# Linking libraries
LDFLAGS= 

SOURCES=main.cpp ComponentRegister.cpp Component.cpp
SRC_FILES=$(addprefix src/,$(SOURCES))

default: $(SRC_FILES)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o bin/$(NAME)
run:
	./bin/$(NAME)
clean:
	rm bin/$(NAME)
