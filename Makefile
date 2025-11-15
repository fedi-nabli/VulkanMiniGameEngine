TARGET = bin/vulkan_engine

VULKAN_LIB_PATH ?= $(VULKAN_SDK)/lib
CFLAGS = -std=c++17 -I. -I$(VULKAN_SDK)/include `pkg-config --cflags glfw3`
LD_FLAGS = -L$(VULKAN_LIB_PATH) -Wl,-rpath,$(VULKAN_LIB_PATH) `pkg-config --static --libs glfw3` -lvulkan

all: $(TARGET)

$(TARGET): src/main.cc
	@mkdir -p bin
	g++ $(CFLAGS) -o $(TARGET) src/main.cc $(LD_FLAGS)

run: $(TARGET)
	./bin/vulkan_engine

.PHONY = all run clean

clean:
	rm -rf $(TARGET)
