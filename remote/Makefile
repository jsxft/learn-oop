all: app

sources = main.cpp				\
	$(wildcard devices/*.cpp)	\
	$(wildcard commands/*.cpp)	\
	$(wildcard remotes/*.cpp)	\


ifneq "$(MAKECMDGOALS)" "clean"
	-include $(subst .cpp,.d,$(sources))
endif

app: $(subst .cpp,.o,$(sources))
	@ echo "[make e] $@"
	@ $(LINK.o) $^ $(OUTPUT_OPTION)

%.o: %.cpp
	@ echo "[make o] $@"
	@ $(COMPILE.cpp) $< $(OUTPUT_OPTION)

%.d: %.cpp
	@ echo "[make d] $@"
	@ $(CXX) -MM $< | sed '1s!.*:!$@ $(subst .d,.o,$@):!' > $@


CXX				:= g++
CXXFLAGS		:= -std=c++17 -Wall -g
COMPILE.cpp 	:= $(CXX) $(CXXFLAGS) -c
LINK.o 			:= $(CXX)
OUTPUT_OPTION 	 = -o $@

clean:
	find . -type f -name '*.[od]'  -delete
	rm -f app
