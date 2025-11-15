#include "first_app.hpp"

namespace vmge
{
  void FirstApp::run()
  {
    while (!vmgeWindow.shouldClose())
    {
      glfwPollEvents();
    }
  }
};
