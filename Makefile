# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -g -I .

SRC := $(wildcard *.cpp)
OBJS = $(SRC:.cpp=.o)

EXEC_DIR = ./executors
EXEC_SRC := $(wildcard $(EXEC_DIR)/*.cpp)
EXEC_OBJS = $(EXEC_SRC:.cpp=.o)

# ****************************************************
# Targets needed to bring the executable up to date

all: server

server: $(OBJS) $(EXEC_OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $(EXEC_OBJS)

clean:
	rm -f *.o
	rm -f $(EXEC_DIR)/*.o
	rm -f server

%.o: %.cpp globals.h

$(EXEC_DIR)/%.o: $(EXEC_DIR)/.cpp globals.h
