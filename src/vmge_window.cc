#include "vmge_window.hpp"

#include <GLFW/glfw3.h>

namespace vmge
{
  VmgeWindow::VmgeWindow(int w, int h, std::string name)
    : width(w), height(h), windowName(name)
  {
    initWindow();
  }

  VmgeWindow::~VmgeWindow()
  {
    glfwDestroyWindow(window);
    glfwTerminate();
  }

  void VmgeWindow::initWindow()
  {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
  }
};
