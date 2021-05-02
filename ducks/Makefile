all: app

SOURCES = main.cpp \
	$(wildcard ducks/*.cpp) \
	$(wildcard ducks/fly_behavior/*.cpp) \
	$(wildcard ducks/quack_behavior/*.cpp)

include $(subst .cpp,.d,$(SOURCES))

app: $(subst .cpp,.o,$(SOURCES))
	$(LINK.cpp) $^ $(OUTPUT_OPTION)

%.o: %.cpp
	$(COMPILE.cpp) $< $(OUTPUT_OPTION)

%.d: %.cpp
	echo "$@ $(subst .d,.o,$@):$$($(CXX) -MM $< | sed "s/.*://")" > $@


COMPILE.cpp = $(CXX) $(CXXFLAGS) -c
LINK.cpp = $(CXX)
CXX = g++
CXXFLAGS = -std=c++17 -Wall
OUTPUT_OPTION = -o $@

clean:
	find . -type f -name '*.o' -delete
	find . -type f -name '*.d' -delete
	rm app
