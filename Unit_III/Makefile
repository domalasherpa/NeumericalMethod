CXX=g++
CXXFLAGS= -Wall

BUILD_DIR=build
SRCS = $(wildcard *.cc)
EXECS= $(patsubst %.cc, $(BUILD_DIR)/%, $(SRCS))

all: $(EXECS)

${BUILD_DIR}/%: %.cc
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -o $@ $^ 

clean:
	rm -f $(EXECS)
