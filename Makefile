
CXX = clang++
CXXFLAGS = -std=c++17 -Wall -Wextra -Wpedantic

TARGET = lab00Test

OBJS = lab00Test.o arrayFuncs.o tddFuncs.o


all: $(TARGET)


$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)


lab00Test.o: lab00Test.cpp arrayFuncs.h tddFuncs.h
	$(CXX) $(CXXFLAGS) -c lab00Test.cpp

arrayFuncs.o: arrayFuncs.cpp arrayFuncs.h
	$(CXX) $(CXXFLAGS) -c arrayFuncs.cpp

tddFuncs.o: tddFuncs.cpp tddFuncs.h
	$(CXX) $(CXXFLAGS) -c tddFuncs.cpp


clean:
	rm -f $(TARGET) $(OBJS)
