# Creating variables
CC=g++ 
CFLAGS=-Wall -g -std=c++11
LFLAGS=-lm
TARGET=PA2

# This searchs the sub directory "src" for all the cpp files 
C_SRCS := \
  $(wildcard *.cpp) \
  $(wildcard src/*.cpp) \
  $(wildcard src/**/*.cpp)


# Searches the sub directory "src" for header files
HDRS := \
  $(wildcard *.h) \
  $(wildcard src/*.h) \
	$(wildcard src/**/*.h)


# Get list of strings where .cpp is replaced with .o
# Get list of object files needed using filters
OBJS := $(patsubst %.cpp, bin/%.o, $(wildcard *.cpp))
OBJS += $(filter %.o, $(patsubst src/%.cpp, bin/%.o, $(C_SRCS)))

# default target
all: build
		@echo "All Done"

# Link all the built objects
build: $(OBJS)
		$(CC) $(OBJS) -o $(TARGET) $(LFLAGS)

# Catch root directory src files
bin/%.o: %.cpp $(HDRS)
		@mkdir -p $(dir $@)
		$(CC) $(CFLAGS) -c $< -o $@

# Catch all nested directory files
bin/%.o: src/%.cpp $(HDRS)
		@mkdir -p $(dir $@)
		$(CC) $(CFLAGS) -c $< -o $@


# Clears bin for clean executions
clean:
		rm -f $(TARGET)
		rm -rf bin
# Runs the newly compiled program
run: build
		./$(TARGET) pooh.ppm
# Prints all the found files
which:
		@echo "FOUND SOURCES: ${C_SRCS}"
		@echo "FOUND HEADERS: ${HDRS}"
		@echo "TARGET OBJS: ${OBJS}"
