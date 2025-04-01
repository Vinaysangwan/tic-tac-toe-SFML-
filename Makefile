# Compiler
CXX = g++
CXXFLAGS = -I./include -std=c++23 -Wall -Wextra -O3

# Liberaries
LDFLAGS = -L./libs -lsfml-window -lsfml-system -lsfml-graphics

# Directories
SRC_DIR = src
OBJ_DIR = output

# Source & Object Files
SRC = $(wildcard $(SRC_DIR)/**/*.cpp $(SRC_DIR)/*.cpp)
OBJ = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRC))

# Executable
EXE = main.exe

# Target
all: $(EXE) run

# Compilation rule
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Linking rule
$(EXE): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXE) $(OBJ) $(LDFLAGS)

# Run
run:
	./$(EXE)

# Debug
debug:
	gdb ./$(EXE)

# Clean
clean:
	rm -rf $(OBJ_DIR)/* $(EXE)