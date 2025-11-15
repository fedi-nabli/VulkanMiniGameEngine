#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace vmge
{
  class VmgeWindow
  {
    public:
      VmgeWindow(int w, int h, std::string name);
      ~VmgeWindow();

      VmgeWindow(const VmgeWindow&) = delete;
      VmgeWindow& operator=(const VmgeWindow&) = delete;

      bool shouldClose() { return glfwWindowShouldClose(window); }

    private:
      void initWindow();

    private:
      const int width;
      const int height;

      std::string windowName;
      GLFWwindow* window;
  };
};
