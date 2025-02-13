# Makefile for main

CXX = g++                # The C++ compiler
CXXFLAGS = -Wall -Wextra # Compilation flags (you can add more if needed)

SRC = main.cpp           # Your source file(s)
OBJ = main.o             # Object file that gets generated from the source
EXE = main               # The executable to be generated

# Default target to build the executable
all: $(EXE)

# Rule to create the executable from object files
$(EXE): $(OBJ)
	$(CXX) $(OBJ) -o $(EXE)

# Rule to compile the source file into an object file
$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC)

# Clean up generated files
clean:
	rm -f $(OBJ) $(EXE)

# Phony targets (not actual files)
.PHONY: all clean
