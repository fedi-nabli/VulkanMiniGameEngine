TARGET = bin/vulkan_engine

HEADERS = includes/*.hpp
SOURCES = src/*.cc

VULKAN_LIB_PATH ?= $(VULKAN_SDK)/lib
CFLAGS = -std=c++17 -I./includes -I$(VULKAN_SDK)/include `pkg-config --cflags glfw3`
LD_FLAGS = -L$(VULKAN_LIB_PATH) -Wl,-rpath,$(VULKAN_LIB_PATH) `pkg-config --static --libs glfw3` -lvulkan

all: $(TARGET)

$(TARGET): $(HEADERS) $(SOURCES)
	@mkdir -p bin
	g++ $(CFLAGS) -o $(TARGET) $(SOURCES) $(LD_FLAGS)

run: $(TARGET)
	./bin/vulkan_engine

.PHONY = all run clean

clean:
	rm -rf $(TARGET)
