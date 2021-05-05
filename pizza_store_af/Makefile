all: app

SOURCES = main.cpp									\
	$(wildcard cheeses/*.cpp)						\
	$(wildcard doughs/*.cpp)						\
	$(wildcard sauces/*.cpp)						\
	$(wildcard veggies/*.cpp)						\
	$(wildcard pepperonies/*.cpp)					\
	$(wildcard clams/*.cpp)							\
	$(wildcard pizza_ingredient_factories/*.cpp)	\
	$(wildcard pizzas/*.cpp)						\
	$(wildcard pizza_stores/*.cpp)					\

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
