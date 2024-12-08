CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = simple_bar_graph
SRC = simple_bar_graph.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(TARGET)
