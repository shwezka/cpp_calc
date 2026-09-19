# Compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Target executable
TARGET = main

# Source files
SRCS = main.cpp

# Rule to run the executable
run: $(TARGET)
	./$(TARGET)

# Clean rule to remove generated files
clean:
	rm -f $(TARGET) $(OBJS)